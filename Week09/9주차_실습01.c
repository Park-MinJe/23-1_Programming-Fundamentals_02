#include <stdio.h>

int main()
{
    int currentTime, age, fee = 0;

    printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð� ����): ");
    scanf_s("%d %d", &currentTime, &age);

    if (currentTime < 17) {
        if (age > 13 && age < 65) {
            fee = 34000;
        }
        else {
            fee = 25000;
        }
    }
    else {
        fee = 10000;
    }

    printf("����� %d�� �Դϴ�.", fee);

    return 0;
}

