#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a, b;
    char expressao[10000];

    while(scanf(" %s", expressao) != EOF){
        if(expressao[0] == ')')
            printf("incorrect\n");
        else{
            a = 0;
            b = 0;
            for(i = 0; expressao[i] != '\0'; i++){
                if(expressao[i] == '(')
                    a++;
                else if(expressao[i] == ')'){
                    b++;
                    if(a > 0){
                        a--;
                        b--;
                    }
                }
            }

            if(a == 0 && b == 0)
                printf("correct\n");
            else
                printf("incorrect\n");
        }
    }
    return 0;
} 
