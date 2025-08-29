#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j, a, b;
    char *diamante;
    diamante = (char*)malloc(sizeof(char));

    scanf(" %d", &N);

    for(i = 0; i < N; i++){
        scanf(" %s", diamante);
        a = b = 0;
        for(j = 0; *(diamante+j) != '\0'; j++){
            if(*(diamante+j) == '<')
                a++;
            else if(*(diamante+j) == '>'){
                if(a > 0){
                    b++;
                    a--;
                }
            }
        }
        printf("%d\n", b);
    }

    return 0;
} 
