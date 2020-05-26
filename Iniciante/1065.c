#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, contador=0, numbers[10];

    for(i = 1; i < 6; i++){
        scanf("%d", &numbers[i]);
        if(abs(numbers[i]) % 2 == 0)
            contador++;
    }

    printf("%d valores pares\n", contador);

    return 0;
} 
