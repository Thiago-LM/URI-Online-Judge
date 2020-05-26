#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k=0;
    char risada[60], resto[60];
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    scanf(" %s", risada);

    for(i = 0; risada[i] != '\0'; i++){
        for(j = 0; j < 5; j++){
            if(risada[i] == vogais[j]){
                resto[k] = risada[i];
                if(resto[k])
                    k++;
            }
        }
    }

    resto[k] = '\0';

    for(i = 0, j = k-1; i < k/2; i++, j--){
        if(resto[i] != resto[j]){
            printf("N\n");
            return 0;
        }
    }

    printf("S\n");

    return 0;
} 
