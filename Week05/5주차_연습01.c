#include <stdio.h>

int main()
{
    int x, y;

    printf("x: ");
    scanf_s("%d", &x);
    printf("y: ");
    scanf_s("%d", &y);

    //x > 0 ? (y > 0 ? printf("1사분면\n") : printf("4사분면\n")) : (y > 0 ? printf("2사분면\n") : printf("3사분면\n"));
    if (x > 0) {
        if (y > 0) {
            printf("1사분면\n");
        }
        else {
            printf("4사분면\n");
        }
    }
    else {
        if (y > 0) {
            printf("2사분면\n");
        }
        else {
            printf("3사분면\n");
        }
    }

    return 0;
}