#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argu[]){
	float x, y, resultado;
	//declaramos nuestras variables, donde x será la opcion de C --> F
	//y "y" será el numero de entrada y por supuesto el resultado será lo que salga de la conversion
	
	x=atof(argu[1]);
	y=atof(argu[2]);
	//ponemos if para la condicion de que si x es 0 se cambiará de C-->F
	//el otro if será para F-->C
	
	if(x==0){
		resultado=(y*1.8)+32;
		//la formula para convertir de c --> f
		printf("%.2f\n", resultado);
	}
	if(x==1){
		resultado=(y-32)/1.8;
		//la formula para convertir de F-->C
		printf("%.2f\n", resultado);
	}
	
	return 0;
}
