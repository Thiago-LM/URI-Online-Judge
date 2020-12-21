#include <stdio.h>

int main()
{
    int p, P, q, i;
    float V = 0;
    scanf("%d", &p);
    
    for(i = 0; i < p; i++) {
        scanf("%d %d", &P, &q);
        if(P == 1001)
            V += q * 1.50;
        if(P == 1002)
            V += q * 2.50;
        if(P == 1003)
            V += q * 3.50;
        if(P == 1004)
            V += q * 4.50;
        if(P == 1005)
            V += q * 5.50;
    }
    
    printf("%.2f\n", V);

    return 0;
}
