#include <stdio.h>

int get_tax(int);

int main()
{
    int income;

    printf("�ҵ��� �Է��Ͻÿ�(����): ");
    scanf_s("%d", &income);

    printf("�ҵ漼�� %d�����Դϴ�.\n", get_tax(income));

    return 0;
}

int get_tax(int income) {
    if (income <= 1000) {
        return income * 0.08;
    }

    return 1000 * 0.08 + (income - 1000) * 0.1;
}