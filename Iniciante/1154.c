#include <stdio.h>

int main() {
    int idade, i = 0;
    float media = 0;

    scanf("%d", &idade);

    while(idade >= 0) {
        i++;
        media += idade;
        scanf("%d", &idade);
    }
    printf("%.2f\n", media / i);

    return 0;
} 
