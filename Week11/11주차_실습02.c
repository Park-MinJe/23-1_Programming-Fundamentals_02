#include <stdio.h>

int check_alpha(char);

int main()
{
    char c;

    printf("문자를 입력하시오: ");
    scanf_s("%c", &c);

    if (check_alpha(c)) printf("%c는 알파벳 문자입니다.\n", c);
    else printf("%c는 알파벳 문자가 아닙니다.\n", c);

    return 0;
}

int check_alpha(char c) {
    if (c >= 'a' && c <= 'z') return 1;
    return 0;
}