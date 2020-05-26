#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numbers[10];
    int i, contador=0;

    for(i = 0; i < 6; i++){
        scanf("%f", &numbers[i]);
        if(numbers[i] > 0)
            contador++;
    }

    printf("%d valores positivos\n", contador);

    return 0;
} 
