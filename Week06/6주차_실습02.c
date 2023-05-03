#include <stdio.h>

int main() {
    int menu, n_User = 0,
        accId1 = -1, balance1 = -1,
        accId2 = -1, balance2 = -1,
        accId3 = -1, balance3 = -1,
        inputId, inputMoney;

    while (1) {
        printf("----Menu-----\n");
        printf("1. 계좌개설\n");
        printf("2. 입금\n");
        printf("3. 출금\n");
        printf("4. 계좌정보 전체 출력\n");
        printf("5. 프로그램 종료\n");
        printf("선택: ");
        scanf("%d", &menu);

        if (menu == 1) {
            while (1) {
                if (n_User == 3) {
                    printf("**계좌 개설 실패**\n");
                    printf("이미 3개의 계좌가 존재합니다.\n");
                    break;
                }

                printf("[계좌개설]\n");
                printf("계좌ID: ");
                scanf("%d", &inputId);
                printf("입금액: ");
                scanf("%d", &inputMoney);

                if (inputId == accId1 || inputId == accId2 || inputId == accId3) {
                    printf("**계좌 개설 실패**\n");
                    printf("이미 존재하는 아이디입니다.\n");
                }
                else {
                    if (inputMoney < 0) {
                        printf("**계좌 개설 실패**\n");
                        printf("0원 미만을 입력하셨습니다..\n");
                    }
                    else {
                        printf("**계좌 개설 성공!**\n");
                        if (n_User == 0) {
                            accId1 = inputId;
                            balance1 = inputMoney;

                            printf("계좌ID: %d\n", accId1);
                            printf("잔액: %d\n", balance1);

                            n_User++;
                            break;
                        }
                        else if (n_User == 1) {
                            accId2 = inputId;
                            balance2 = inputMoney;

                            printf("계좌ID: %d\n", accId2);
                            printf("잔액: %d\n", balance2);

                            n_User++;
                            break;
                        }
                        else if (n_User == 2) {
                            accId3 = inputId;
                            balance3 = inputMoney;

                            printf("계좌ID: %d\n", accId3);
                            printf("잔액: %d\n", balance3);

                            n_User++;
                            break;
                        }
                    }
                }
            }
        }
        else if (menu == 2) {
            while (1) {
                printf("[입 금]\n");
                printf("계좌ID: ");
                scanf("%d", &inputId);
                printf("입금액: ");
                scanf("%d", &inputMoney);

                if (inputId != accId1 && inputId != accId2 && inputId != accId3) {
                    printf("**입금 실패**\n");
                    printf("계좌ID가 존재하지 않습니다.\n");
                }
                else {
                    if (n_User == 1) {
                        balance1 += inputMoney;

                        printf("**입금 성공!**\n");
                        printf("계좌ID: %d\n", accId1);
                        printf("잔액: %d\n", balance1);
                        break;
                    }
                    else if (n_User == 2) {
                        balance2 += inputMoney;

                        printf("**입금 성공!**\n");
                        printf("계좌ID: %d\n", accId2);
                        printf("잔액: %d\n", balance2);
                        break;
                    }
                    else if (n_User == 3) {
                        balance3 += inputMoney;

                        printf("**입금 성공!**\n");
                        printf("계좌ID: %d\n", accId3);
                        printf("잔액: %d\n", balance3);
                        break;
                    }
                }
            }
        }
        else if (menu == 3) {
            while (1) {
                printf("[출 금]\n");
                printf("계좌ID: ");
                scanf("%d", &inputId);
                printf("출금액: ");
                scanf("%d", &inputMoney);

                if (inputId != accId1 && inputId != accId2 && inputId != accId3) {
                    printf("**출금 실패**\n");
                    printf("계좌ID가 존재하지 않습니다.\n");
                }
                else {
                    if (n_User == 1) {
                        if (balance1 - inputMoney < 0) {
                            printf("**출금 실패**\n");
                            printf("잔액이 부족합니다.\n");
                        }
                        else {
                            balance1 -= inputMoney;

                            printf("**출금 성공!**\n");
                            printf("계좌ID: %d\n", accId1);
                            printf("잔액: %d\n", balance1);
                            break;
                        }
                    }
                    else if (n_User == 2) {
                        if (balance2 - inputMoney < 0) {
                            printf("**출금 실패**\n");
                            printf("잔액이 부족합니다.\n");
                        }
                        else {
                            balance2 -= inputMoney;

                            printf("**출금 성공!**\n");
                            printf("계좌ID: %d\n", accId2);
                            printf("잔액: %d\n", balance2);
                            break;
                        }
                    }
                    else if (n_User == 3) {
                        if (balance3 - inputMoney < 0) {
                            printf("**출금 실패**\n");
                            printf("잔액이 부족합니다.\n");
                        }
                        else {
                            balance3 -= inputMoney;

                            printf("**출금 성공!**\n");
                            printf("계좌ID: %d\n", accId3);
                            printf("잔액: %d\n", balance3);
                            break;
                        }
                    }
                }
            }
        }
        else if (menu == 4) {
            if (n_User >= 1) {
                printf("계좌ID: %d\n", accId1);
                printf("잔액: %d\n\n", balance1);
            }

            if (n_User >= 2) {
                printf("계좌ID: %d\n", accId2);
                printf("잔액: %d\n\n", balance2);
            }

            if (n_User == 3) {
                printf("계좌ID: %d\n", accId3);
                printf("잔액: %d\n", balance3);
            }
        }
        else if (menu == 5) {
            printf("프로그램을 종료합니다\n");
            break;
        }
    }

    return 0;
}