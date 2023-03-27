#include <stdio.h>

int main() {
	int m, v;
	double E;

	printf("질량(kg): ");
	scanf_s("%d", &m);

	printf("속도(m/s): ");
	scanf_s("%d", &v);

	E = (double)m * (double)v * (double)v / 2.0;
	printf("운동에너지(J): %lf\n", E);
	//printf("운동에너지(J): %.2lf\n", E);

	return 0;
}