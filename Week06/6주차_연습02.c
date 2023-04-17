#include <stdio.h>

int main()
{
    int n = 7;

    printf("정수를 입력하시오: ");
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", j + 1);
        }
        printf("\n");
    }

    return 0;
}