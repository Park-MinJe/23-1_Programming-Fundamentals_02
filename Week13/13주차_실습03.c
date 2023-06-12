#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define WORDS_NUM 5
#define MAX_WORD_LEN 20

char* findWord(char* pStr);
void translate(char* pSour, char* pDest);

char dic[WORDS_NUM][2][MAX_WORD_LEN] = {
	{"we", "우리"},
	{"like", "좋아한다"},
	{"program", "프로그램"},
	{"i", "나"},
	{"enjoy", "즐긴다"}
};

int main() {
	char input[128] = {0}, output[256] = {0};

	printf("종료하려면 \"quit\"을 입력하시오...\n");

	while (1) {
		printf("영단어를 입력하세요.\n=>");
		gets_s(input, sizeof(input));

		if (strcmp(input, "quit") == 0) break;

		translate(input, output);

		if (strcmp(output, "empty") == 0) printf("=>사전에 없는 단어입니다\n\n");
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