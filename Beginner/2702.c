#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f, b, m, f1, b1, m1, resto=0;

    scanf("%d %d %d", &f, &b, &m);
    scanf("%d %d %d", &f1, &b1, &m1);

    if(f1 > f)
        resto = abs(f - f1);
    if(b1 > b)
        resto += abs(b - b1);
    if(m1 > m)
        resto += abs(m - m1);

    printf("%d\n", resto);

    return 0;
} 
