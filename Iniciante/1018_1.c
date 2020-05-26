#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, f, g, h;
    scanf("%d", &a);
    printf("%d\n", a);
    b = a/100;
    printf("%d nota(s) de R$ 100,00\n", b);
    c = (a-(b*100))/50;
    printf("%d nota(s) de R$ 50,00\n", c);
    d = (a-(b*100)-(c*50))/20;
    printf("%d nota(s) de R$ 20,00\n", d);
    e = (a-(b*100)-(c*50)-(d*20))/10;
    printf("%d nota(s) de R$ 10,00\n", e);
    f = (a-(b*100)-(c*50)-(d*20)-(e*10))/5;
    printf("%d nota(s) de R$ 5,00\n", f);
    g = (a-(b*100)-(c*50)-(d*20)-(e*10)-(f*5))/2;
    printf("%d nota(s) de R$ 2,00\n", g);
    h = (a-(b*100)-(c*50)-(d*20)-(e*10)-(f*5)-(g*2))/1;
    printf("%d nota(s) de R$ 1,00\n", h);

    return 0;
} 
