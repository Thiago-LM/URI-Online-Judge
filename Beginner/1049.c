#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[20], b[20], c[20], *d[7];
    gets(a);
    gets(b);
    gets(c);
    d[0] = "vertebrado";
    d[1] = "ave";
    d[2] = "inseto";
    d[3] = "carnivoro";
    d[4] = "onivoro";
    d[5] = "hematofago";
    if (strcmp(a, d[0]) == 0){
        if (strcmp(b, d[1]) == 0){
            if (strcmp(c, d[3]) == 0)
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else{
            if (strcmp(c, d[4]) == 0)
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }
    else{
        if (strcmp(b, d[2]) == 0){
            if (strcmp(c, d[5]) == 0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else{
            if (strcmp(c, d[5]) == 0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }
    return 0;
} 
