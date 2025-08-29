#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i, j, k=4, l=1;
    for(i = 0; i < 2.2; i+=0.2){
        for(j = l; j < k; j++){
            if((int)(i*10)%10 == 0 && (int)(j*10)%10 == 0)
                printf("I=%.0f J=%.0f\n", i, j);
            else
                printf("I=%.1f J=%.1f\n", i, j);
        }
        k += 0.2;
        l += 0.2;
    }

    return 0;
} 
