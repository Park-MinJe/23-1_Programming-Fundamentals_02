#include <stdio.h>

int main() {
    int menu, n_User = 0,
        accId1 = -1, balance1 = -1,
        accId2 = -1, balance2 = -1,
        accId3 = -1, balance3 = -1,
        inputId, inputMoney;

    while (1) {
        printf("----Menu-----\n");
        printf("1. ���°���\n");
        printf("2. �Ա�\n");
        printf("3. ���\n");
        printf("4. �������� ��ü ���\n");
        printf("5. ���α׷� ����\n");
        printf("����: ");
        scanf("%d", &menu);

        if (menu == 1) {
            while (1) {
                if (n_User == 3) {
                    printf("**���� ���� ����**\n");
                    printf("�̹� 3���� ���°� �����մϴ�.\n");
                    break;
                }

                printf("[���°���]\n");
                printf("����ID: ");
                scanf("%d", &inputId);
                printf("�Աݾ�: ");
                scanf("%d", &inputMoney);

                if (inputId == accId1 || inputId == accId2 || inputId == accId3) {
                    printf("**���� ���� ����**\n");
                    printf("�̹� �����ϴ� ���̵��Դϴ�.\n");
                }
                else {
                    if (inputMoney < 0) {
                        printf("**���� ���� ����**\n");
                        printf("0�� �̸��� �Է��ϼ̽��ϴ�..\n");
                    }
                    else {
                        printf("**���� ���� ����!**\n");
                        if (n_User == 0) {
                            accId1 = inputId;
                            balance1 = inputMoney;

                            printf("����ID: %d\n", accId1);
                            printf("�ܾ�: %d\n", balance1);

                            n_User++;
                            break;
                        }
                        else if (n_User == 1) {
                            accId2 = inputId;
                            balance2 = inputMoney;

                            printf("����ID: %d\n", accId2);
                            printf("�ܾ�: %d\n", balance2);

                            n_User++;
                            break;
                        }
                        else if (n_User == 2) {
                            accId3 = inputId;
                            balance3 = inputMoney;

                            printf("����ID: %d\n", accId3);
                            printf("�ܾ�: %d\n", balance3);

                            n_User++;
                            break;
                        }
                    }
                }
            }
        }
        else if (menu == 2) {
            while (1) {
                printf("[�� ��]\n");
                printf("����ID: ");
                scanf("%d", &inputId);
                printf("�Աݾ�: ");
                scanf("%d", &inputMoney);

                if (inputId != accId1 && inputId != accId2 && inputId != accId3) {
                    printf("**�Ա� ����**\n");
                    printf("����ID�� �������� �ʽ��ϴ�.\n");
                }
                else {
                    if (n_User == 1) {
                        balance1 += inputMoney;

                        printf("**�Ա� ����!**\n");
                        printf("����ID: %d\n", accId1);
                        printf("�ܾ�: %d\n", balance1);
                        break;
                    }
                    else if (n_User == 2) {
                        balance2 += inputMoney;

                        printf("**�Ա� ����!**\n");
                        printf("����ID: %d\n", accId2);
                        printf("�ܾ�: %d\n", balance2);
                        break;
                    }
                    else if (n_User == 3) {
                        balance3 += inputMoney;

                        printf("**�Ա� ����!**\n");
                        printf("����ID: %d\n", accId3);
                        printf("�ܾ�: %d\n", balance3);
                        break;
                    }
                }
            }
        }
        else if (menu == 3) {
            while (1) {
                printf("[�� ��]\n");
                printf("����ID: ");
                scanf("%d", &inputId);
                printf("��ݾ�: ");
                scanf("%d", &inputMoney);

                if (inputId != accId1 && inputId != accId2 && inputId != accId3) {
                    printf("**��� ����**\n");
                    printf("����ID�� �������� �ʽ��ϴ�.\n");
                }
                else {
                    if (n_User == 1) {
                        if (balance1 - inputMoney < 0) {
                            printf("**��� ����**\n");
                            printf("�ܾ��� �����մϴ�.\n");
                        }
                        else {
                            balance1 -= inputMoney;

                            printf("**��� ����!**\n");
                            printf("����ID: %d\n", accId1);
                            printf("�ܾ�: %d\n", balance1);
                            break;
                        }
                    }
                    else if (n_User == 2) {
                        if (balance2 - inputMoney < 0) {
                            printf("**��� ����**\n");
                            printf("�ܾ��� �����մϴ�.\n");
                        }
                        else {
                            balance2 -= inputMoney;

                            printf("**��� ����!**\n");
                            printf("����ID: %d\n", accId2);
                            printf("�ܾ�: %d\n", balance2);
                            break;
                        }
                    }
                    else if (n_User == 3) {
                        if (balance3 - inputMoney < 0) {
                            printf("**��� ����**\n");
                            printf("�ܾ��� �����մϴ�.\n");
                        }
                        else {
                            balance3 -= inputMoney;

                            printf("**��� ����!**\n");
                            printf("����ID: %d\n", accId3);
                            printf("�ܾ�: %d\n", balance3);
                            break;
                        }
                    }
                }
            }
        }
        else if (menu == 4) {
            if (n_User >= 1) {
                printf("����ID: %d\n", accId1);
                printf("�ܾ�: %d\n\n", balance1);
            }

            if (n_User >= 2) {
                printf("����ID: %d\n", accId2);
                printf("�ܾ�: %d\n\n", balance2);
            }

            if (n_User == 3) {
                printf("����ID: %d\n", accId3);
                printf("�ܾ�: %d\n", balance3);
            }
        }
        else if (menu == 5) {
            printf("���α׷��� �����մϴ�\n");
            break;
        }
    }

    return 0;
}