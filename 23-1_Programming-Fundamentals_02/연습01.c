#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int main() {
	int data = 0;

	printf("16진수 정소를 입력하시오: ");
	scanf_s("%x", &data);

	printf("8진수로는 %#o입니다\n", data);
	printf("10진수로는 %d입니다\n", data);
	printf("16진수로는 %#x입니다.\n", data);

	return 0;
}