#include <stdio.h>
#include <stdlib.h>

int main() {
	int max = 100, min = 1,
		flag,
		n = min + (max - min) / 2;

	printf("컴퓨터가 당신이 생각하는 숫자를 알아맞히는 게임입니다.\n");
	printf("하나의 숫자를 생각하세요.\n");
	printf("컴퓨터가 제시한 숫자보다 정답이 높으면 1, 낮으면 -1라고 하세요.\n");
	printf("컴퓨터가 숫자를 맞히면 0라고 하세요.\n\n");

	while (1) {
		printf("max: %d\tmin: %d\n", max, min);
		printf("숫자가 %d 인가요? ", n);
		scanf_s("%d", &flag);
		if (flag == 0) break;
		
		switch (flag)
		{
		case -1:
			max = n - 1;
			break;
		case 1:
			min = n + 1;
			break;
		default:
			break;
		}
		if (max < min) {
			printf("정답 후보가 없습니다.\n");
			break;
		}
		n = min + (max - min) / 2;
	}

	return 0;
}