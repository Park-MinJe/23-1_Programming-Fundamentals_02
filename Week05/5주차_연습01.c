#include <stdio.h>

int main()
{
    int x, y;

    printf("x: ");
    scanf_s("%d", &x);
    printf("y: ");
    scanf_s("%d", &y);

    //x > 0 ? (y > 0 ? printf("1��и�\n") : printf("4��и�\n")) : (y > 0 ? printf("2��и�\n") : printf("3��и�\n"));
    if (x > 0) {
        if (y > 0) {
            printf("1��и�\n");
        }
        else {
            printf("4��и�\n");
        }
    }
    else {
        if (y > 0) {
            printf("2��и�\n");
        }
        else {
            printf("3��и�\n");
        }
    }

    return 0;
}