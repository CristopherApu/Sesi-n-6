#include <stdio.h>

int main (){

	int numero1;
	
	printf("Por favor, ingrese un numero:\n");
	scanf("%d", &numero1);
	
	if(numero1%2 == 0){
		printf("Par.\n");
		} else{
		printf("Impar./n");
		}
	
	return 0;
}
