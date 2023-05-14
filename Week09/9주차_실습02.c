#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, fibo;

    printf("몇번째 항까지 구할까요? ");
    scanf_s("%d", &n);

    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            fibo = a;
        }
        else if (i == 1) {
            fibo = b;
        }
        else {
            fibo = a + b;
            a = b;
            b = fibo;
        }
        printf("%d, ", fibo);
    }

    return 0;
}