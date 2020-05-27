#include <stdio.h>

int main()
{
    int A, N, F, i, E = 0;

    scanf("%d", &A);
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d", &F);
        if((F * A) >= 40000000){
            E++;
        }
    }

    printf("%d\n", E);

    return 0;
}
 
