#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    if (a >= b)
        c = (24 - a) + (0 + b);
    else
        c = b - a;
    printf("O JOGO DUROU %d HORA(S)\n", c);

    return 0;
} 
