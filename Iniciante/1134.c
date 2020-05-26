#include <stdio.h>

int main(void) {
	int n, alcool=0, gasolina=0, diesel=0;
	
	while(scanf("%d", &n) && n != 4){
		if(n == 1)
			alcool++;
		
		if(n == 2)
			gasolina++;
		
		if(n == 3)
			diesel++;
		
		if(n > 3 || n < 1)
			continue;
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
	
	return 0;
} 
