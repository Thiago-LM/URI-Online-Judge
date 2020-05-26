#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;
    double res100, res50, res20, res10, res5, res2, res1, res05, res025, res01, res005;
    scanf("%f", &a);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", (int)a/100);
    res100 = fmodf(a,100);
    printf("%d nota(s) de R$ 50.00\n", (int)res100/50);
    res50 = fmod(res100,50);
    printf("%d nota(s) de R$ 20.00\n", (int)res50/20);
    res20 = fmod(res50,20);
    printf("%d nota(s) de R$ 10.00\n", (int)res20/10);
    res10 = fmod(res20,10);
    printf("%d nota(s) de R$ 5.00\n", (int)res10/5);
    res5 = fmod(res10,5);
    printf("%d nota(s) de R$ 2.00\n", (int)res5/2);
    res2 = fmod(res5,2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", (int)res2/1);
    res1 = fmod(res2,1);
    printf("%d moeda(s) de R$ 0.50\n", (int)(res1/0.5));
    res05 = fmod(res1,0.5);
    printf("%d moeda(s) de R$ 0.25\n", (int)(res05/0.25));
    res025 = fmod(res05,0.25);
    printf("%d moeda(s) de R$ 0.10\n", (int)(res025/0.1));
    res01 = fmod(res025,0.1);
    printf("%d moeda(s) de R$ 0.05\n", (int)(res01/0.05));
    res005 = fmod(res01,0.05);
    printf("%.0f moeda(s) de R$ 0.01\n", res005/0.01);

    return 0;
} 
