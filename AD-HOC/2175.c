#include <stdio.h>
#include <stdlib.h>

int main()
{
    double O, B, I;
    scanf("%lf %lf %lf", &O, &B, &I);

    if(O < B && O < I)
        printf("Otavio\n");
    if(B < O && B < I)
        printf("Bruno\n");
    if(I < O && I < B)
        printf("Ian\n");
    if(O == B || O == I || I == B)
        printf("Empate\n");

    return 0;
} 
