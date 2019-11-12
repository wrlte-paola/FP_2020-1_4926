#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double raiz(float x, float tol, float candidato){
	//declaramos los parametros de entrada para resolver la raiz, con una funcion llamada raiz
	//"x" como numero de netrada de la raiz
	double division, promedio, resultado, diferencia;
	//variables que utlizaremos para hacer el procedimiento
	division=x/candidato;
	promedio=(x+candidato)/2;
	do{
		//el ciclo para recorrer todas las operaciones hasta llegar a la tolerancia adecuada
		resultado=x/promedio;
		diferencia=fabs(resultado-promedio);
		promedio=(resultado+promedio)/2;		
	}
	while(diferencia>tol);
	//estas instrucciones se repetira hasta que la diferencia sea mayor a la toleancia
	 return resultado;
	 //se regresará resultado que cympla con while y por lo tanto que cumpla con la tolerancia.
}


int main(int argc, char *argv[]) {
	double x, tol, candidato, RAIZ;
	//variables con las que tenemos que resolver la raiz 
	x=atof(argv[1]);
	tol=atof(argv[2]);
	candidato=atof(argv[3]);
	//declaramos a la raiz de la funcion anterior
	//con las variables que se necesitan de entrada
	RAIZ=raiz(x, tol, candidato);
	//y le asignamos el resultado de RAIZ
	printf("%lf\n", RAIZ);
	
	return 0;
	
}
	
	
