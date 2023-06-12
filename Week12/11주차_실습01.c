#include <stdio.h>

double vector_dot_prod(double[], double[]);

int main() {
	double X[3], Y[3];

	printf("3차원 벡터 X를 x,y,z 순으로 입력하시오.\n");
	for (int i = 0; i < 3; i++) {
		scanf_s("%lf", &X[i]);
	}
	printf("3차원 벡터 Y를 x,y,z 순으로 입력하시오.\n");
	for (int i = 0; i < 3; i++) {
		scanf_s("%lf", &Y[i]);
	}

	printf("[ %.2lf %.2lf %.2lf ]*[ %.2lf %.2lf %.2lf ] = %.2lf\n",
		X[0], X[1], X[2], Y[0], Y[1], Y[2],
		vector_dot_prod(X, Y));

	system("pause");

	return 0;
}

double vector_dot_prod(double x[], double y[]) {
	double return_value = 0;
	for (int i = 0; i < 3; i++) {
		return_value += x[i] * y[i];
	}
	return return_value;
}