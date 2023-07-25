#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/**Este programa muestra las tablas de multiplicar de un numero**/
	
	/**Esta variable de tipo entero guarda el numero ingresado por el usuario**/
	int numeroIngresado;
	
	/**Esta variable de tipo entero es un contador**/
	int contador = 0;
	
	printf("Ingresa un numero: ");
	scanf("%i", &numeroIngresado);
	
	while(contador<10){
		++contador;
		printf("\n%i * %i = %i", numeroIngresado, contador, numeroIngresado*contador);
		
	}
	
	return 0;
}
