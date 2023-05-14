#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int arr[10],
		i, j, tmp,
		productNum;

	srand((unsigned int)time(NULL));

	for (i = 0; i < 10; ) {
		tmp = rand() % 100 + 1;
		for (j = 0; j <= i; j++) {
			if (arr[j] == tmp) {
				break;
			}
		}

		if (j == i + 1) {
			arr[i] = tmp;
			i++;
		}
		else continue;
	}

	printf("상품 번호를 입력하시오: ");
	scanf_s("%d", &productNum);

	printf("상품%d번은 선반 %d에 있습니다.\n", productNum, arr[productNum]);

	return 0;
}