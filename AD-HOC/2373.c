#include <stdio.h>

int main()
{
    int N, L, C, t = 0, i;

    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d %d", &L, &C);
        if(L > C){
            t += C;
        }
    }

    printf("%d\n", t);

    return 0;
}
 
