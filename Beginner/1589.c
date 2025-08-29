#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long int T, R1, R2, i;
    unsigned long int *r;

    scanf("%lu", &T);
    r = malloc(T * sizeof(unsigned long int));

    for(i = 0; i < T; i++){
        scanf("%lu %lu", &R1, &R2);
        r[i] = R1 + R2;
    }

    for(i = 0; i < T; i++){
        printf("%lu\n", r[i]);
    }

    return 0;
}
 
