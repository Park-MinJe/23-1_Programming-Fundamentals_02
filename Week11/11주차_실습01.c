#include <stdio.h>

int is_multiple(int, int);

int main()
{
    int n, m;

    printf("ù ��° ������ �Է��Ͻÿ�: ");
    scanf_s("%d", &n);

    printf("�� ��° ������ �Է��Ͻÿ�: ");
    scanf_s("%d", &m);

    if (is_multiple(n, m)) {
        printf("%d�� %d�� ����Դϴ�.\n", n, m);
    }
    else {
        printf("%d�� %d�� ����� �ƴմϴ�.\n", n, m);
    }

    return 0;
}

int is_multiple(int n, int m) {
    if (n % m == 0) return 1;
    return 0;
}