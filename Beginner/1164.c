#include <stdio.h>

int main() {
    int N, X, i, j, s = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%d", &X);
        for(j = 1; j < X; j++) {
            if((X % j) == 0) {
                s += j;
            }
        }
        if(s == X) {
            printf("%d eh perfeito\n", X);
        } else {
            printf("%d nao eh perfeito\n", X);
        }
        s = 0;
    }

    return 0;
} 
