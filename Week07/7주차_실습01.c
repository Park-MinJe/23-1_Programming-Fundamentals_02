#include <stdio.h>

int main() {
	char op;
	int a, b;

	while (1) {
		printf("*****************\n");
		printf("A---- Add\n");
		printf("S---- Subtract\n");
		printf("M---- Multiply\n");
		printf("D---- Divide\n");
		printf("Q---- Quit\n");
		printf("*****************\n");
		printf("������ �����Ͻÿ�:");
		scanf_s("%c", &op);

		if (op == 'Q') { break; }
		
		printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
		scanf_s("%d %d", &a, &b);
		getchar();

		switch (op) {
		case 'A':
			printf("%d\n", a + b);
			break;
		case 'S':
			printf("%d\n", a - b);
			break;
		case 'M':
			printf("%d\n", a * b);
		case 'D':
			if (b != 0) { printf("%d\n", a / b); }
			else { printf("DIV 0 error!!\n"); }
			break;
		}
	}
	
	return 0;
}