#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, m=0, h=0;
    scanf("%d", &s);
    if (s >= 60){
        m = s/60;
        s = s-m*60;
    }
    if (m >= 60){
        h = m/60;
        m = m-h*60;
    }
    printf("%d:%d:%d\n", h, m, s);

    return 0;
} 
