#include <stdio.h>

int main()
{
    int n1, n2;

    printf("���� 2���� �Է��Ͻÿ�: ");
    scanf_s("%d %d", &n1, &n2);

    for (int i = ((n1 > n2) ? n1 : n2); i >= 1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            printf("\n�ִ������� %d�Դϴ�.\n", i);
            break;
        }
    }

    return 0;
}