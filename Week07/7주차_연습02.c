#include <stdio.h>

int main()
{
    int current = 100,
        max = 500,
        input;

    while (1) {
        printf("현재 연료량: %d\n", current);
        if (current < 20) {
            printf("(경고) 연료가 20리터 미만입니다.\n");
        }
        printf("연료 충전은 +, 소모는 -로 입력해주세요: ");
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