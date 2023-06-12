#include <stdio.h>
#include <string.h>

char id[] = "programming_c_23-1";
char pwd[] = "a0B1c2D3@";

int main() {
	char inputId[100];
	char inputPwd[100];

	printf("아이디를 입력하시오: ");
	gets_s(inputId, sizeof(inputId));
	printf("비밀번호를 입력하시오: ");
	gets_s(inputPwd, sizeof(inputPwd));

	if (strcmp(id, inputId) == 0) {
		if (strcmp(pwd, inputPwd) == 0) {
			printf("인증에 성공했습니다!\n");
		}
		else printf("인증에 실패했습니다!\n");
	}
	else printf("인증에 실패했습니다!\n");

	system("pause");

	return 0;
}