#include <stdio.h>

int check_alpha(char);

int main()
{
    char c;

    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf_s("%c", &c);

    if (check_alpha(c)) printf("%c�� ���ĺ� �����Դϴ�.\n", c);
    else printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.\n", c);

    return 0;
}

int check_alpha(char c) {
    if (c >= 'a' && c <= 'z') return 1;
    return 0;
}