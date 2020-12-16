#include <stdio.h>

 int main(){
	
	int clave;
	int clave_ingresada;
	int clave_ingresada2;
	int clave_ingresada3;
	
	clave = 20989792;
		
	printf("Por favor, ingrese su clave\n");
	scanf("%d", &clave_ingresada);
	
	if(clave_ingresada == clave){
			printf("Bienvenido");
			} else{
				printf("Clave erronea. Por favor, intentelo nuevamente\n");
				}
	printf("Por favor, ingrese su clave\n");
	scanf("%d", &clave_ingresada2);
	
	if(clave_ingresada == clave){
			printf("Bienvenido");
			} else{
				printf("Clave erronea. Por favor, intentelo nuevamente\n");
				}
	printf("Por favor, ingrese su clave\n");
	scanf("%d", &clave_ingresada3);
	
	if(clave_ingresada == clave){
			printf("Bienvenido");
			} else{
				printf("Clave erronea. Se cerrara la sesion.\n");
				}

	return 0;
 }
 
