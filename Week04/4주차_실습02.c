/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    const double pi = 3.14;
    int r;
    
    printf("반지름을 입력하시오: ");
    scanf_s("%d", &r);
    
    printf("표면적: %lf\n", 4*pi*r*r);
    printf("체적: %lf\n", 4*pi*r*r*r/3.0)

    return 0;
}

