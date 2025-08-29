#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T1, T2, T3, T4;
    int t_disp=0;

    scanf("%d %d %d %d", &T1, &T2, &T3, &T4);

    t_disp = (T1 - 1) + (T2 - 1) + (T3 - 1) + T4;

    printf("%d\n", t_disp);

    return 0;
} 
