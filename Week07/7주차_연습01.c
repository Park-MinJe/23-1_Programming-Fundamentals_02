#include <stdio.h>

int main()
{
    int n, cnt = 0, sum = 0;

    while (cnt < 3) {
        printf("숫자를 입력하시오: ");
        scanf_s("%d", &n);

        if (n < 0) continue;

        sum += n;
        cnt++;
    }

    printf("\n합계는 %d입니다.\n", sum);

    return 0;
}