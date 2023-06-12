#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define WORDS_NUM 5
#define MAX_WORD_LEN 20

char* findWord(char* pStr);
void translate(char* pSour, char* pDest);

char dic[WORDS_NUM][2][MAX_WORD_LEN] = {
	{"we", "�츮"},
	{"like", "�����Ѵ�"},
	{"program", "���α׷�"},
	{"i", "��"},
	{"enjoy", "����"}
};

int main() {
	char input[128] = {0}, output[256] = {0};

	printf("�����Ϸ��� \"quit\"�� �Է��Ͻÿ�...\n");

	while (1) {
		printf("���ܾ �Է��ϼ���.\n=>");
		gets_s(input, sizeof(input));

		if (strcmp(input, "quit") == 0) break;

		translate(input, output);

		if (strcmp(output, "empty") == 0) printf("=>������ ���� �ܾ��Դϴ�\n\n");
		else printf("=>%s\n\n", output);
	}

	system("pause");

	return 0;
}

char* findWord(char* pStr) {
	for (int i = 0; i < MAX_WORD_LEN; i++) {
		if (strcmp(pStr, dic[i][0]) == 0)
			return dic[i][1];
	}
	
	char rt[10] = "empty";
	return rt;
}

void translate(char* pSour, char* pDest) {
	int len = strlen(pSour);

	char* pEng = pSour;
	char* pKor = pDest;

	strcpy_s(pKor, sizeof(pKor) + 1, findWord(pEng));
}