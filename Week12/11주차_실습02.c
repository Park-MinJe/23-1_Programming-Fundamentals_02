#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5
#define RAND_MAX 32767

void insertion_sort(int[][2]);

int main() {
	int coordinate[SIZE][2],
		i, j,
		tmp_x, tmp_y;

	srand((unsigned int)time(NULL));

	printf("정렬 전\n");
	printf("x\ty\n");
	for (i = 0; i < SIZE; ) {
		tmp_x = rand() * 201 / (RAND_MAX + 1) - 100;
		tmp_y = rand() * 201 / (RAND_MAX + 1) - 100;

		for (j = 0; j <= i; j++) {
			if (coordinate[j][0] == tmp_x
				&& coordinate[j][1] == tmp_y) {
				break;
			}
		}

		if (j == i + 1) {
			coordinate[i][0] = tmp_x;
			coordinate[i][1] = tmp_y;

			printf("%d\t%d\n", coordinate[i][0], coordinate[i][1]);

			i++;
		}
		else continue;
	}
	printf("\n");

	insertion_sort(coordinate);

	printf("정렬 후\n");
	printf("x\ty\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d\t%d\n", coordinate[i][0], coordinate[i][1]);
	}

	system("pause");

	return 0;
}

void insertion_sort(int target[][2]) {
	int i, j, x_key, y_key;
	for (i = 1; i < SIZE; i++) {
		x_key = target[i][0];
		y_key = target[i][1];

		for (j = i - 1; j >= 0; j--) {
			if (target[j][0] > x_key) {
				target[j + 1][0] = target[j][0];
				target[j + 1][1] = target[j][1];
			}
			else if (target[j][0] == x_key) {
				if (target[j][1] > y_key) {
					target[j + 1][0] = target[j][0];
					target[j + 1][1] = target[j][1];
				}
			}
			else break;
		}

		target[j + 1][0] = x_key;
		target[j + 1][1] = y_key;
	}
}