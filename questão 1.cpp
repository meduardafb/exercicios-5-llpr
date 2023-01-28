#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int numero [10];
	int mn, min, mini, max, maxi;
	
	printf("Digite 10 números: \n");
	
	for(int n = 0; n < 10; n++){
		printf(" \n");
		scanf("%d",&n[numero]);
		
	}
	
	min = numero[0];
	max = numero[0];
	mini = 0;
	maxi = 0;
	
	for(int mn = 0; mn < 10; mn++){
		
		if(numero[mn] < min){
			min = mn;
			mini = numero[0];
		}
		
		if(numero[mn > min]){
			max = mn;
			maxi = numero[0];
		}
	}
	
	printf("O menor valor: %d \t índice %d\n", min, mini);
	printf("O maior valor: %d \t índice %d", max, maxi);
	
	return 0;
}
