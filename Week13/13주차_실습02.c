#include <stdio.h>
#include <string.h>

char id[] = "programming_c_23-1";
char pwd[] = "a0B1c2D3@";

int main() {
	char inputId[100];
	char inputPwd[100];

	printf("���̵� �Է��Ͻÿ�: ");
	gets_s(inputId, sizeof(inputId));
	printf("��й�ȣ�� �Է��Ͻÿ�: ");
	gets_s(inputPwd, sizeof(inputPwd));

	if (strcmp(id, inputId) == 0) {
		if (strcmp(pwd, inputPwd) == 0) {
			printf("������ �����߽��ϴ�!\n");
		}
		else printf("������ �����߽��ϴ�!\n");
	}
	else printf("������ �����߽��ϴ�!\n");

	system("pause");

	return 0;
}