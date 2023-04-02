/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    
    printf("숫자를 입력하시오: ");
    scanf("%d", &n);
    
    printf("십의 자리: %d\n", n/10);
    printf("일의 자리: %d", n%10);

    return 0;
}

