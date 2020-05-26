#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int aux, i, j, l, n, s=0;
    char N[100], K[10]={6,2,5,5,4,5,6,3,7,6};
    scanf("%d", &n);

    for(j=0; j<n; j++){
        scanf("%s", N);
        l = strlen(N);
        for(i=0; i<l; i++){
            s += K[N[i] - '0'];
        }
        aux = s;
        s = 0;
        printf("%d leds\n", aux);
    }

    return 0;
} 
