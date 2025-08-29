#include <stdio.h>

int main()
{
    int C[5], a = 0, i;

    for(i = 1; i <= 4; i++){
        scanf("%d", &C[i]);
        if(C[i] == 1)
            a = i;
    }

    printf("%d\n", a);

    return 0;
}
 
