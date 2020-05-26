#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numbers[10], numbers_pos[10], media=0;
    int i, j=0, contador=0;

    for(i = 0; i < 6; i++){
        scanf("%f", &numbers[i]);
        if(numbers[i] > 0){
            contador++;
            numbers_pos[j] = numbers[i];
            j++;
        }
    }

    printf("%d valores positivos\n", contador);

    for(i = 0; i < j; i++){
        media += numbers_pos[i];
    }

    media /= j;

    printf("%.1f\n", media);

    return 0;
} 
