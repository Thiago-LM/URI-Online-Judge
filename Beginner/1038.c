#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X, Y;
    scanf("%f %f", &X, &Y);
    if (X == 1)
        printf("Total: R$ %.2f\n", Y*4);
    else if (X == 2)
        printf("Total: R$ %.2f\n", Y*4.5);
    else if (X == 3)
        printf("Total: R$ %.2f\n", Y*5);
    else if (X == 4)
        printf("Total: R$ %.2f\n", Y*2);
    else if (X == 5)
        printf("Total: R$ %.2f\n", Y*1.5);

    return 0;
} 
