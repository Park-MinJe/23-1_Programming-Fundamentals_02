#include <stdio.h>

int main()
{
    int h1, h2, h3, 
        max = 0, min = 0;

    // ���߿� �ݺ����� ��� ��
    printf("Ű 1�� �Է��Ͻÿ�: ");
    scanf_s("%d", &h1);

    printf("Ű 2�� �Է��Ͻÿ�: ");
    scanf_s("%d", &h2);

    printf("Ű 3�� �Է��Ͻÿ�: ");
    scanf_s("%d", &h3);

    //printf("���� ū Ű�� %d�Դϴ�.\n", (h1 > h2) ? (h2 > h3 ? h1 : (h1 > h3 ? h1 : h3)) : (h2 < h3 ? h3 : h2));
    //printf("���� ���� Ű�� %d�Դϴ�.\n\n", h1 < h2 ? (h2 < h3 ? h1 : (h1 < h3 ? h1 : h3)) : (h2 > h3 ? h3 : h2));
    if (h1 > h2) {
        if (h2 > h3) {
            max = h1;
            min = h3;
        }
        else {
            min = h2;
            if (h1 > h3) {
                max = h1;
            }
            else {
                max = h3;
            }
        }
    }
    else {
        if (h2 < h3) {
            max = h3;
            min = h1;
        }
        else {
            max = h2;
            if (h1 > h3) {
                min = h3;
            }
            else {
                min = h1;
            }
        }
    }

    printf("���� ū Ű�� %d�Դϴ�.\n", max);
    printf("���� ���� Ű�� %d�Դϴ�.\n\n", min);

    return 0;
}

