#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N, X, i, j;

    scanf("%d", &N);
    for(i = 0; i < N; i++){
        unsigned long long graos=1;
        scanf("%d", &X);
        if(X == 64){
            double resp=1;
            for(j = 1; j < X; j++)
                resp += pow(2, j);
            printf("%.0lf kg\n", (resp/12)/1000);
            continue;
        }
        for(j = 1; j < X; j++)
            graos += pow(2, j);

        printf("%llu kg\n", (graos/12)/1000);
    }

    return 0;
} 
