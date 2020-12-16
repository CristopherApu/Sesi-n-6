#include <stdio.h>

int main(){
	
	int edad;
	int destino;
	int valor_final;
	
	printf("Bienvenido, por favor ingrese su edad\n");
	scanf("%d", &edad);

	if(edad<15){
		printf("A que destino desea ir?\n");
		scanf("%d", &destino);
		if(destino == 1){
			valor_final = 2500;
			printf("El valor de su boleto es de:%d\n", valor_final);
		}else if(destino == 2){
			valor_final = 1200;
			printf("El valor de su boleto es de:%d\n", valor_final);
		}else {
			valor_final = 2000;
			printf("El valor de su boleto es de:%d\n", valor_final);
			}
			
			
			
		else if(15 =< edad <65){
		printf("A que destino desea ir?\n");
		scanf("%d", &destino);
		if(destino == 1){
			valor_final = 4200;
			printf("El valor de su boleto es de:%d\n", valor_final);
		}else if(destino == 2){
			valor_final = 3000;
			printf("El valor de su boleto es de:%d\n", valor_final);
		}else {
			valor_final = 3800;
			printf("El valor de su boleto es de:%d\n", valor_final);
			}
			
			
			
		else {
			printf("A que destino desea ir?\n");
			scanf("%d", &destino);
		if(destino == 1){
			valor_final = 3000;
			printf("El valor de su boleto es de:%d\n", valor_final);
		}else if(destino == 2){
			valor_final = 2000;
			printf("El valor de su boleto es de:%d\n", valor_final);
		}else {
			valor_final = 2500;
			printf("El valor de su boleto es de:%d\n", valor_final);			
			}
	return 0;
}
}
