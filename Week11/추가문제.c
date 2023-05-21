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
    isIdExist = 0;   // id 존재하면 1, 존재하지 않으면 0

int main() {
    

    while (1) {
        printMenu();
        printf("선택: ");
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
            printf("프로그램을 종료합니다\n\n");
            break;
        }
        else {
            printf("잘못된 입력입니다. 1~5 값을 입력하시오\n\n");
        }
    }

    return 0;
}

void printMenu() {
    printf("----Menu-----\n");
    printf("1. 계좌개설\n");
    printf("2. 입금\n");
    printf("3. 출금\n");
    printf("4. 계좌정보 전체 출력\n");
    printf("5. 프로그램 종료\n");
}

void accountOpening() {
    while (1) {
        if (n_User == accMax) {
            printf("**계좌 개설 실패**\n");
            printf("이미 %d개의 계좌가 존재합니다.\n\n", accMax);
            break;
        }

        printf("[계좌개설]\n");
        printf("계좌ID: ");
        scanf_s("%d", &inputId);
        printf("입금액: ");
        scanf_s("%d", &inputMoney);

        for (int i = 0; i < n_User; i++) {
            if (accountData[i][0] == inputId) {
                printf("**계좌 개설 실패**\n");
                printf("이미 존재하는 아이디입니다.\n\n");

                isIdExist = 1;

                break;
            }
            else isIdExist = 0;
        }
        if (isIdExist) break;

        if (inputMoney < 0) {
            printf("**계좌 개설 실패**\n");
            printf("0원 미만을 입력하셨습니다..\n\n");
        }
        else {
            printf("**계좌 개설 성공!**\n");
            accountData[n_User][0] = inputId;
            accountData[n_User][1] = inputMoney;

            printf("계좌ID: %d\n", accountData[n_User][0]);
            printf("잔액: %d\n\n", accountData[n_User][1]);

            n_User++;
        }

        break;
    }
}

void deposit() {
    while (1) {
        printf("[입 금]\n");
        printf("계좌ID: ");
        scanf_s("%d", &inputId);
        printf("입금액: ");
        scanf_s("%d", &inputMoney);

        for (int i = 0; i < n_User; i++) {
            if (accountData[i][0] == inputId) {
                accountData[i][1] += inputMoney;

                printf("**입금 성공!**\n");
                printf("계좌ID: %d\n", accountData[i][0]);
                printf("잔액: %d\n\n", accountData[i][1]);

                isIdExist = 1;

                break;
            }
            else isIdExist = 0;
        }

        if (!isIdExist) {
            printf("**입금 실패**\n");
            printf("계좌ID가 존재하지 않습니다.\n\n");
        }

        break;
    }
}

void withdraw() {
    while (1) {
        printf("[출 금]\n");
        printf("계좌ID: ");
        scanf_s("%d", &inputId);
        printf("출금액: ");
        scanf_s("%d", &inputMoney);

        for (int i = 0; i < n_User; i++) {
            if (accountData[i][0] == inputId) {
                if (accountData[i][1] - inputMoney < 0) {
                    printf("**출금 실패**\n");
                    printf("잔액이 부족합니다.\n\n");
                }
                else {
                    accountData[i][1] -= inputMoney;

                    printf("**출금 성공!**\n");
                    printf("계좌ID: %d\n", accountData[i][0]);
                    printf("잔액: %d\n\n", accountData[i][1]);
                }

                isIdExist = 1;
                break;
            }
        }

        if (!isIdExist) {
            printf("**입금 실패**\n");
            printf("계좌ID가 존재하지 않습니다.\n\n");
        }

        break;
    }
}

void info() {
    for (int i = 0; i < n_User; i++) {
        printf("계좌ID: %d\n", accountData[i][0]);
        printf("잔액: %d\n\n", accountData[i][1]);
    }
}