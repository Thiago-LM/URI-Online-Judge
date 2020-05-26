#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    scanf("%d", &day);
    printf("%d ano(s)\n", day/365);
    printf("%d mes(es)\n", day % 365/30);
    printf("%d dia(s)\n", day % 365 % 30);

    return 0;
} 
