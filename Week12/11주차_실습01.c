#include <stdio.h>

double vector_dot_prod(double[], double[]);

int main() {
	double X[3], Y[3];

	printf("3���� ���� X�� x,y,z ������ �Է��Ͻÿ�.\n");
	for (int i = 0; i < 3; i++) {
		scanf_s("%lf", &X[i]);
	}
	printf("3���� ���� Y�� x,y,z ������ �Է��Ͻÿ�.\n");
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