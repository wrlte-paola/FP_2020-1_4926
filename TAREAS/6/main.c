#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argu[]){
	int resultado;
	int argui[argc];
	int i;
	int j;
	//lista donde se guardan los valoresw 
	//for para incluir los valores
	for(i=1; i<argc; i++){
		//resultado comenzar� en 1 por mi caso base
		resultado=1;
		//har� la operaci�n
		for(j=1; j<argc; j++){
			argui[j]=atoi(argu[j]);
			//sacar resultado sin excluir
			resultado=resultado*argui[j];
	
		}
		//con su inverso multiplicativo se excluye
		resultado=resultado/argui[i];
		printf("%i\n", resultado);
		
	}
	return 0;
}
