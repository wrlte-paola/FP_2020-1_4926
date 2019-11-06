#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	float x, y, resultado;
	int i;
	//declaro variables que utlizaré
	//a x como la base
	//a y como el exponenete
	x=atof(argv[1]);
	y=atof(argv[2]);
	//asignamos valores
	resultado=1;
	for(i=0; i<y; i++){
		//i aumentará en 1 hasta llegar al exponente
		//creamos a resultado que acumulara la multiplicación de la base por ella misma
		resultado=resultado*x;
	}
	
	printf("%.2f\n", resultado);
	//imprimimos el resultado
	return 0;
}
