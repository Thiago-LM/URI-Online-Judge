#include <stdio.h>

int main()
{
    int T, i, a = 0;
    int t[6] = {};

    scanf("%d", &T);

    for(i = 0; i < 5; i++){
        scanf("%d", &t[i]);
        if(t[i] == T){
            a++;
        }
    }

    printf("%d\n", a);

    return 0;
}
 
