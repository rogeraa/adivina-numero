#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int numeroSecreto, intento, contador=0;
	srand(time(NULL));
	numeroSecreto = rand() % 100 +1;
	printf("=== Juego: Adivina el Numero ===\n\n");
	
	do{
		printf("Ingresa un numero entre 1 y 100: ");
		scanf("%d", &intento);
		contador++;
		
		if(intento < numeroSecreto){
			printf("El numero es MAYOR\n\n");
		}else if(intento > numeroSecreto){
			printf("El numero es MENOR\n\n");
		}
	}while(intento != numeroSecreto);
	printf("!Correcto! Lo adivinaste en %d intentos.\n", contador);
	return 0;
}