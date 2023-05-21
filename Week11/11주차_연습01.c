#include <stdio.h>

int even(int);
int absolute(int);
int sign(int);

int main()
{
    int n;

    printf("정수를 입력하시오: ");
    scanf_s("%d", &n);

    printf("even()의 결과: %d\n", even(n));
    printf("absolute()의 결과: %d\n", absolute(n));
    printf("sign()의 결과: %d\n", sign(n));

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