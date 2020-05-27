#include <stdio.h>

int main()
{
    int x, i = 0;

    scanf("%d", &x);

    while(i < 6){
        if(((x+i) % 2) == 0){
            x++;
            continue;
        } else {
            printf("%d\n", x+i);
            i++;
        }
    }

    return 0;
}
 
