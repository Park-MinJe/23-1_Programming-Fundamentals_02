/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int h1, h2, h3, 
        h1_feet, h2_feet, h3_feet;
    double h1_toInch, h2_toInch, h3_toInch;
    
    // 나중에 반복문을 배울 것
    printf("키 1을 입력하시오: ");
    scanf("%d", &h1);
    
    printf("키 2를 입력하시오: ");
    scanf("%d", &h2);
    
    printf("키 3을 입력하시오: ");
    scanf("%d", &h3);
    
    printf("가장 큰 키는 %d입니다.\n", (h1>h2)?(h2>h3?h1:(h1>h3?h1:h3)):(h2<h3?h3:h2));
    printf("가장 작은 키는 %d입니다.\n\n", h1<h2?(h2<h3?h1:(h1<h3?h1:h3)):(h2>h3?h3:h2));
    
    // 키 변환
    /*h1_toInch = (double)h1/2.54;
    h1_feet = (int)(h1_toInch/12);
    h2_toInch = (double)h2/2.54;
    h2_feet = (int)(h2_toInch/12);
    h3_toInch = (double)h3/2.54;
    h3_feet = (int)(h3_toInch/12);
    
    printf("키 1 %dcm는 %d피트 %lf인치입니다.\n", h1, h1_feet, h1_toInch-h1_feet*12);
    printf("키 2 %dcm는 %d피트 %lf인치입니다.\n", h2, h2_feet, h2_toInch-h2_feet*12);
    printf("키 3 %dcm는 %d피트 %lf인치입니다.\n", h3, h3_feet, h3_toInch-h3_feet*12);*/
    
    // math.h의 fmod 함수 사용
    h1_toInch = (double)h1/2.54;
    h2_toInch = (double)h2/2.54;
    h3_toInch = (double)h3/2.54;
    
    printf("키 1 %dcm는 %d피트 %lf인치입니다.\n", h1, (int)(h1_toInch/12), fmod(h1_toInch, 12.0));
    printf("키 2 %dcm는 %d피트 %lf인치입니다.\n", h2, (int)(h2_toInch/12), fmod(h2_toInch, 12.0));
    printf("키 3 %dcm는 %d피트 %lf인치입니다.\n", h3, (int)(h3_toInch/12), fmod(h3_toInch, 12.0));

    return 0;
}

