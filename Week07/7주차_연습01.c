#include <stdio.h>

int main()
{
    int n, cnt = 0, sum = 0;

    while (cnt < 3) {
        printf("���ڸ� �Է��Ͻÿ�: ");
        scanf_s("%d", &n);

        if (n < 0) continue;

        sum += n;
        cnt++;
    }

    printf("\n�հ�� %d�Դϴ�.\n", sum);

    return 0;
}