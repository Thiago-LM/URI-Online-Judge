#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    double b, c;
    scanf("%s %lf %lf", &a, &b, &c);
    printf("TOTAL = R$ %.2lf\n", b+(c/100)*15);


    return 0;
} 
