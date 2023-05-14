#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

int main() {
	int coordinate[SIZE][2],
		i, j,
		tmp_x, tmp_y;

	srand((unsigned int)time(NULL));

	for (i = 0; i < SIZE; ) {
		tmp_x = rand() % 200001 - 100000;
		tmp_y = rand() % 200001 - 100000;

		for (j = 0; j <= i; j++) {
			if (coordinate[j][0] == tmp_x
				&& coordinate[j][1] == tmp_y) {
				break;
			}
		}

		if (j == i + 1) {
			coordinate[i][0] = tmp_x;
			coordinate[i][1] = tmp_y;
			i++;
		}
		else continue;
	}

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE - i - 1; j++) {
			if (coordinate[j][0] > coordinate[j + 1][0]) {
				tmp_x = coordinate[j][0];
				tmp_y = coordinate[j][1];

				coordinate[j][0] = coordinate[j + 1][0];
				coordinate[j][1] = coordinate[j + 1][1];

				coordinate[j + 1][0] = tmp_x;
				coordinate[j + 1][1] = tmp_y;
			}
			else if (coordinate[j][0] == coordinate[j + 1][0]) {
				if (coordinate[j][1] > coordinate[j + 1][1]) {
					tmp_x = coordinate[j][0];
					tmp_y = coordinate[j][1];

					coordinate[j][0] = coordinate[j + 1][0];
					coordinate[j][1] = coordinate[j + 1][1];

					coordinate[j + 1][0] = tmp_x;
					coordinate[j + 1][1] = tmp_y;
				}
			}
		}
	}

	printf("x\ty\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d\t%d\n", coordinate[i][0], coordinate[i][1]);
	}

	return 0;
}