#include <stdio.h>

int main() {
	int m, v;
	double E;

	printf("����(kg): ");
	scanf_s("%d", &m);

	printf("�ӵ�(m/s): ");
	scanf_s("%d", &v);

	E = (double)m * (double)v * (double)v / 2.0;
	printf("�������(J): %lf\n", E);
	//printf("�������(J): %.2lf\n", E);

	return 0;
}