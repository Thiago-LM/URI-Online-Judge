#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    while(N >= 0 && N <= 100){
        if(N == 0){
            printf("E\n");
            break;
        }
        if(N > 0 && N <= 35){
            printf("D\n");
            break;
        }
        if(N > 35 && N <= 60){
            printf("C\n");
            break;
        }
        if(N > 60 && N <= 85){
            printf("B\n");
            break;
        }
        if(N > 85){
            printf("A\n");
            break;
        }
    }

    return 0;
}
 
