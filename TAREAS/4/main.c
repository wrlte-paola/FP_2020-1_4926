#include<stdio.h>
#include<stdlib.h>

int main (int argc,char* argu[]){
	//se declara una lista para guardar los datos
	//el promedio se daclara como realpor si los datos ingresados los dan en decimal
	int lista[argc],suma=0;
	float promedio;
	for(int i=1;i<argc;i++){
		lista[i]=atoi(argu[i]);
	}
	//se declara otra lista para la suma de los datos que empieza en 1 para que no ponga el ./main
	//asi cada vez que se repita se sumara otroa lista y así sucesivamente hasta sumar todos los numeros
	for(int i=1;i<argc;i++){
		suma=suma+lista[i];
	}
	//el argc-1 es para soplo dividir por la cantidad de numeros ingresados y sea correcto
	promedio=(float)suma/(argc-1);
	printf("%.2f\n", promedio);
	return 0;
}
