#include <stdio.h>

int main()
{
    int current = 100,
        max = 500,
        input;

    while (1) {
        printf("���� ���ᷮ: %d\n", current);
        if (current < 20) {
            printf("(���) ���ᰡ 20���� �̸��Դϴ�.\n");
        }
        printf("���� ������ +, �Ҹ�� -�� �Է����ּ���: ");
        scanf_s("%d", &input);

        if (input == 0) break;

        if (input > 0) {
            current += input;
        }
        else if (input < 0) {
            current += input;
        }
    }

    return 0;
}