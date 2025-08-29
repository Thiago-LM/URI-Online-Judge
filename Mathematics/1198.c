#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long s_hash, s_opo;

    while(scanf("%lli %lli", &s_hash, &s_opo) != EOF){
        if(s_opo < s_hash)
            printf("%lli\n", s_hash - s_opo);
        else
            printf("%lli\n", s_opo - s_hash);
    }
    return 0;
} 
