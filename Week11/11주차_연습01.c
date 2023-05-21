#include <stdio.h>

int even(int);
int absolute(int);
int sign(int);

int main()
{
    int n;

    printf("������ �Է��Ͻÿ�: ");
    scanf_s("%d", &n);

    printf("even()�� ���: %d\n", even(n));
    printf("absolute()�� ���: %d\n", absolute(n));
    printf("sign()�� ���: %d\n", sign(n));

    return 0;
}

int even(int n) {
    return 1 - n % 2;
}

int absolute(int n) {
    if (n < 0) n *= -1;
    return n;
}

int sign(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    if (n > 0) return 1;
}