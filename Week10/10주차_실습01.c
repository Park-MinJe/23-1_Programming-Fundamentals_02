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

	printf("��ǰ ��ȣ�� �Է��Ͻÿ�: ");
	scanf_s("%d", &productNum);

	printf("��ǰ%d���� ���� %d�� �ֽ��ϴ�.\n", productNum, arr[productNum]);

	return 0;
}