#include <stdio.h>

int main() {
	int menu,
		accId = 115, balance = 70, 
		inputId, inputMoney;

	printf("----Menu-----\n");
	printf("1. 계좌개설\n");
	printf("2. 입금\n");
	printf("3. 출금\n");
	printf("4. 계좌정보 전체 출력\n");
	printf("5. 프로그램 종료\n");
	printf("선택: ");
	scanf_s("%d", &menu);

	if (menu == 1) {
		printf("[계좌개설]\n");
		printf("계좌ID: ");
		scanf_s("%d", &inputId);
		printf("입금액: ");
		scanf_s("%d", &inputMoney);

		if (inputId == accId) {
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
				printf("계좌ID: %d\n", inputId);
				printf("잔액: %d\n", inputMoney);
			}
		}
	}
	else if(menu == 2) {
		printf("[입 금]\n");
		printf("계좌ID: ");
		scanf_s("%d", &inputId);
		printf("입금액: ");
		scanf_s("%d", &inputMoney);

		if (inputId != accId) {
			printf("**입금 실패**\n");
			printf("계좌ID가 존재하지 않습니다.\n");
		}
		else {
			balance += inputMoney;
			
			printf("**입금 성공!**\n");
			printf("계좌ID: %d\n", accId);
			printf("잔액: %d\n", balance);
		}
	}
	else if(menu == 3) {
		printf("[출 금]\n");
		printf("계좌ID: ");
		scanf_s("%d", &inputId);
		printf("출금액: ");
		scanf_s("%d", &inputMoney);

		if (inputId != accId) {
			printf("**출금 실패**\n");
			printf("계좌ID가 존재하지 않습니다.\n");
		}
		else {
			balance -= inputMoney;

			if (balance < 0) {
				printf("**출금 실패**\n");
				printf("잔액이 부족합니다.\n");

				balance += inputMoney;
			}
			else {
				printf("**출금 성공!**\n");
				printf("계좌ID: %d\n", accId);
				printf("잔액: %d\n", balance);
			}
		}
	}
	else if(menu == 4) {
		printf("계좌ID: %d\n", accId);
		printf("잔액: %d\n", balance);
	}
	else if(menu == 5) {
		printf("프로그램을 종료합니다\n");
	}

	return 0;
}