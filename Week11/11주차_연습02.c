#include <stdio.h>

int get_tax(int);

int main()
{
    int income;

    printf("소득을 입력하시오(만원): ");
    scanf_s("%d", &income);

    printf("소득세는 %d만원입니다.\n", get_tax(income));

    return 0;
}

int get_tax(int income) {
    if (income <= 1000) {
        return income * 0.08;
    }

    return 1000 * 0.08 + (income - 1000) * 0.1;
}