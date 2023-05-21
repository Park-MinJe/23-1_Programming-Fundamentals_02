#include <stdio.h>

#define accMax 10
#define accAttri 2

void printMenu();
void accountOpening();
void deposit();
void withdraw();
void info();

int menu, n_User = 0,
    accountData[accMax][accAttri],
    //accId1 = -1, balance1 = -1,
    //accId2 = -1, balance2 = -1,
    //accId3 = -1, balance3 = -1,
    inputId, inputMoney,
    isIdExist = 0;   // id �����ϸ� 1, �������� ������ 0

int main() {
    

    while (1) {
        printMenu();
        printf("����: ");
        scanf_s("%d", &menu);

        if (menu == 1) {
            accountOpening();
        }
        else if (menu == 2) {
            deposit();
        }
        else if (menu == 3) {
            withdraw();
        }
        else if (menu == 4) {
            info();
        }
        else if (menu == 5) {
            printf("���α׷��� �����մϴ�\n\n");
            break;
        }
        else {
            printf("�߸��� �Է��Դϴ�. 1~5 ���� �Է��Ͻÿ�\n\n");
        }
    }

    return 0;
}

void printMenu() {
    printf("----Menu-----\n");
    printf("1. ���°���\n");
    printf("2. �Ա�\n");
    printf("3. ���\n");
    printf("4. �������� ��ü ���\n");
    printf("5. ���α׷� ����\n");
}

void accountOpening() {
    while (1) {
        if (n_User == accMax) {
            printf("**���� ���� ����**\n");
            printf("�̹� %d���� ���°� �����մϴ�.\n\n", accMax);
            break;
        }

        printf("[���°���]\n");
        printf("����ID: ");
        scanf_s("%d", &inputId);
        printf("�Աݾ�: ");
        scanf_s("%d", &inputMoney);

        for (int i = 0; i < n_User; i++) {
            if (accountData[i][0] == inputId) {
                printf("**���� ���� ����**\n");
                printf("�̹� �����ϴ� ���̵��Դϴ�.\n\n");

                isIdExist = 1;

                break;
            }
            else isIdExist = 0;
        }
        if (isIdExist) break;

        if (inputMoney < 0) {
            printf("**���� ���� ����**\n");
            printf("0�� �̸��� �Է��ϼ̽��ϴ�..\n\n");
        }
        else {
            printf("**���� ���� ����!**\n");
            accountData[n_User][0] = inputId;
            accountData[n_User][1] = inputMoney;

            printf("����ID: %d\n", accountData[n_User][0]);
            printf("�ܾ�: %d\n\n", accountData[n_User][1]);

            n_User++;
        }

        break;
    }
}

void deposit() {
    while (1) {
        printf("[�� ��]\n");
        printf("����ID: ");
        scanf_s("%d", &inputId);
        printf("�Աݾ�: ");
        scanf_s("%d", &inputMoney);

        for (int i = 0; i < n_User; i++) {
            if (accountData[i][0] == inputId) {
                accountData[i][1] += inputMoney;

                printf("**�Ա� ����!**\n");
                printf("����ID: %d\n", accountData[i][0]);
                printf("�ܾ�: %d\n\n", accountData[i][1]);

                isIdExist = 1;

                break;
            }
            else isIdExist = 0;
        }

        if (!isIdExist) {
            printf("**�Ա� ����**\n");
            printf("����ID�� �������� �ʽ��ϴ�.\n\n");
        }

        break;
    }
}

void withdraw() {
    while (1) {
        printf("[�� ��]\n");
        printf("����ID: ");
        scanf_s("%d", &inputId);
        printf("��ݾ�: ");
        scanf_s("%d", &inputMoney);

        for (int i = 0; i < n_User; i++) {
            if (accountData[i][0] == inputId) {
                if (accountData[i][1] - inputMoney < 0) {
                    printf("**��� ����**\n");
                    printf("�ܾ��� �����մϴ�.\n\n");
                }
                else {
                    accountData[i][1] -= inputMoney;

                    printf("**��� ����!**\n");
                    printf("����ID: %d\n", accountData[i][0]);
                    printf("�ܾ�: %d\n\n", accountData[i][1]);
                }

                isIdExist = 1;
                break;
            }
        }

        if (!isIdExist) {
            printf("**�Ա� ����**\n");
            printf("����ID�� �������� �ʽ��ϴ�.\n\n");
        }

        break;
    }
}

void info() {
    for (int i = 0; i < n_User; i++) {
        printf("����ID: %d\n", accountData[i][0]);
        printf("�ܾ�: %d\n\n", accountData[i][1]);
    }
}