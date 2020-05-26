#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[100];
    
    while(scanf(" %s", palavra) != EOF){
        int i, j, k;
        
        for(i = 0; i < strlen(palavra); i++){
        	for(j = 0; j < i; j++)
        		printf(" ");
        		
        	printf("%c", palavra[0]);
        	for(k = 1; k < strlen(palavra) - i; k++)
        		printf(" %c", palavra[k]);
        	printf("\n");
        }
        printf("\n");
    }
    
    return 0;
} 
