#include <stdio.h>

int const ARR_SIZE = 10;

void array_copy(int a[], int b[], int size);

int main() {
	int a[10] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 },
		b[10];

	array_copy(a, b, ARR_SIZE);

	for (int i = 0; i < ARR_SIZE; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < ARR_SIZE; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");

	system("pause");

	return 0;
}

void array_copy(int a[], int b[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		b[i] = a[i];
	}

	if (i == size) printf("배열이 복사되었음.\n\n");
}