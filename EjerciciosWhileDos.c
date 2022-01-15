#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeroIngresado;
	int contador = 0;
	
	printf("Ingresa un numero: ");
	scanf("%i", &numeroIngresado);
	
	while(contador<10){
		++contador;
		printf("\n%i * %i = %i", numeroIngresado, contador, numeroIngresado*contador);
		
	}
	
	 //4!
	 
	 //1x2x3x4 = 24
	 //5!
	 //1x2x3x4x5= 120
	 
	
	
	
	return 0;
}
