#include <stdio.h>
#include <stdlib.h>

int main() {
	int max = 100, min = 1,
		flag,
		n = min + (max - min) / 2;

	printf("��ǻ�Ͱ� ����� �����ϴ� ���ڸ� �˾Ƹ����� �����Դϴ�.\n");
	printf("�ϳ��� ���ڸ� �����ϼ���.\n");
	printf("��ǻ�Ͱ� ������ ���ں��� ������ ������ 1, ������ -1��� �ϼ���.\n");
	printf("��ǻ�Ͱ� ���ڸ� ������ 0��� �ϼ���.\n\n");

	while (1) {
		printf("max: %d\tmin: %d\n", max, min);
		printf("���ڰ� %d �ΰ���? ", n);
		scanf_s("%d", &flag);
		if (flag == 0) break;
		
		switch (flag)
		{
		case -1:
			max = n - 1;
			break;
		case 1:
			min = n + 1;
			break;
		default:
			break;
		}
		if (max < min) {
			printf("���� �ĺ��� �����ϴ�.\n");
			break;
		}
		n = min + (max - min) / 2;
	}

	return 0;
}