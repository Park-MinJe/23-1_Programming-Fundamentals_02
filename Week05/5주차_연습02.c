#include <stdio.h>

int main()
{
    int h1, h2, h3, 
        max = 0, min = 0;

    // 나중에 반복문을 배울 것
    printf("키 1을 입력하시오: ");
    scanf_s("%d", &h1);

    printf("키 2를 입력하시오: ");
    scanf_s("%d", &h2);

    printf("키 3을 입력하시오: ");
    scanf_s("%d", &h3);

    //printf("가장 큰 키는 %d입니다.\n", (h1 > h2) ? (h2 > h3 ? h1 : (h1 > h3 ? h1 : h3)) : (h2 < h3 ? h3 : h2));
    //printf("가장 작은 키는 %d입니다.\n\n", h1 < h2 ? (h2 < h3 ? h1 : (h1 < h3 ? h1 : h3)) : (h2 > h3 ? h3 : h2));
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

    printf("가장 큰 키는 %d입니다.\n", max);
    printf("가장 작은 키는 %d입니다.\n\n", min);

    return 0;
}

