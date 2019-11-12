#include <stdio.h>
#include <stdlib.h>
 
int sumaDigitos(int Num){
	//Hago una funcion que me permita hacer la suma de los digitos solo para ponerla a mi funcion 
	//que reciba los numeros reales y sea más organizado
	int Suma=0, Resto;
	while(Num!=0){ //no voy a sumar numeros negativos
        Resto=(Num%10);
        //hasta 10 ya que apartir de 9 empiezan a umentar los digitos y no lo va a tomar como un numero
        //por ejmplo el 10 <diez> lo va a tomar como 1 y 0
        Suma=(Suma+Resto);
        //acumulando resultados y sumando
        Num=(Num/10);
    }
    return (Suma);
    //regreo el resultado de mi operación
}

int main(int argc, char *argv[]) {
	int num;
	//agrego mi numero
	num=atof(argv[1]);
    printf("%d\n", sumaDigitos(num));
    //llamando a la funcion anterior
	return 0;
}
