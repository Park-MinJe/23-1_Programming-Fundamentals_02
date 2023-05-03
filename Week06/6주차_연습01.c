#include <stdio.h>

int main()
{
    int n1, n2;

    printf("정수 2개를 입력하시오: ");
    scanf_s("%d %d", &n1, &n2);

    for (int i = ((n1 > n2) ? n1 : n2); i >= 1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            printf("\n최대공약수는 %d입니다.\n", i);
            break;
        }
    }

    return 0;
}