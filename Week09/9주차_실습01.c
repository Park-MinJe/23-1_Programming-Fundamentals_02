#include <stdio.h>

int main()
{
    int currentTime, age, fee = 0;

    printf("현재 시간과 나이를 입력하시오(시간 나이): ");
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

    printf("요금은 %d원 입니다.", fee);

    return 0;
}

