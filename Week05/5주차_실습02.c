#include <stdio.h>

int main() {
	int menu,
		accId = 115, balance = 70, 
		inputId, inputMoney;

	printf("----Menu-----\n");
	printf("1. ���°���\n");
	printf("2. �Ա�\n");
	printf("3. ���\n");
	printf("4. �������� ��ü ���\n");
	printf("5. ���α׷� ����\n");
	printf("����: ");
	scanf_s("%d", &menu);

	if (menu == 1) {
		printf("[���°���]\n");
		printf("����ID: ");
		scanf_s("%d", &inputId);
		printf("�Աݾ�: ");
		scanf_s("%d", &inputMoney);

		if (inputId == accId) {
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
				printf("����ID: %d\n", inputId);
				printf("�ܾ�: %d\n", inputMoney);
			}
		}
	}
	else if(menu == 2) {
		printf("[�� ��]\n");
		printf("����ID: ");
		scanf_s("%d", &inputId);
		printf("�Աݾ�: ");
		scanf_s("%d", &inputMoney);

		if (inputId != accId) {
			printf("**�Ա� ����**\n");
			printf("����ID�� �������� �ʽ��ϴ�.\n");
		}
		else {
			balance += inputMoney;
			
			printf("**�Ա� ����!**\n");
			printf("����ID: %d\n", accId);
			printf("�ܾ�: %d\n", balance);
		}
	}
	else if(menu == 3) {
		printf("[�� ��]\n");
		printf("����ID: ");
		scanf_s("%d", &inputId);
		printf("��ݾ�: ");
		scanf_s("%d", &inputMoney);

		if (inputId != accId) {
			printf("**��� ����**\n");
			printf("����ID�� �������� �ʽ��ϴ�.\n");
		}
		else {
			balance -= inputMoney;

			if (balance < 0) {
				printf("**��� ����**\n");
				printf("�ܾ��� �����մϴ�.\n");

				balance += inputMoney;
			}
			else {
				printf("**��� ����!**\n");
				printf("����ID: %d\n", accId);
				printf("�ܾ�: %d\n", balance);
			}
		}
	}
	else if(menu == 4) {
		printf("����ID: %d\n", accId);
		printf("�ܾ�: %d\n", balance);
	}
	else if(menu == 5) {
		printf("���α׷��� �����մϴ�\n");
	}

	return 0;
}