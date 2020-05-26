#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y;
    int i, j;
    scanf(" %d %d", &X, &Y);
    if(X > 1 && X < 20 && X < Y && Y < 100000){
        for(i = 0; i < Y; i+=X){
            for(j = 1; j < X + 1; j++){
                if(i + j <= Y)
                    printf("%d%c", i+j, (j == X ? '\n' : ' '));
            }
        }
    }
    return 0;
} 
