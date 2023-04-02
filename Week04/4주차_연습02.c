/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y;
    
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
    x>0?(y>0?printf("1사분면\n"):printf("4사분면\n")):(y>0?printf("2사분면\n"):printf("3사분면\n"));

    return 0;
}
