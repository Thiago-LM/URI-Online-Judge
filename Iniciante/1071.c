#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i, aux=0, soma=0;
    scanf("%d", &x);
    scanf("%d", &y);

    if(y > x){
        aux = x;
        x = y;
        y = aux;
    }

    for(i = y + 1; i < x; i++){
        if(abs(i) % 2 != 0)
            soma += i;
    }

    printf("%d\n", soma);

    return 0;
} 
