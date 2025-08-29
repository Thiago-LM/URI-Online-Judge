#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n;

    while(scanf("%I64d", &n) != EOF && n > 1){
        int i;
        long long int trabalho=0;
        long long int vinho[123456];

        for(i = 0; i < n; i++)
            scanf("%lli", &vinho[i]);

        for(i = 1; i < n; i++){
            trabalho += abs(vinho[i-1]);
            vinho[i] += vinho[i-1];
        }

        printf("%lli\n", trabalho);
    }

    return 0;
} 
