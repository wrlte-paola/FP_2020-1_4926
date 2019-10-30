
#include <stdlib.h>
#include <stdio.h>

int valor(char n){
	int a;
	//el switch para asignarle valores char a cada una de las cartas y el resultado como el numero que se le asigno
	//SIEMPRE TERMINAR CADA CASO CON BREAK
	switch(n){
		case 'J':
			a=10;
			break;
		case 'j':
			a=10;
			break;
			
		case 'Q':
			a=10;
			break;
		case'q':
			a=10;
			break;
		
		case 'K':
			a=10;
			break;
		case 'k':
			a=10;
			break;
		
		case 'A':
			a=11;
			break;	
		case 'a':
			a=11;
			break;
		
	}
	return a;
}

int main (int argc, char* argu[]){
	int baraja;
	coi;
	int i;
	//coi es la palabra asignada para char
	for(i=1; i<argc; i++){
		//reconocer lista
		//coi será un valor boleano
		coi=argu[i][0]=='J'||argu[i][0]=='j'|| //para que reconozca mayusculas y minisculas
		argu[i][0]=='Q'||argu[i][0]=='q'||
		argu[i][0]=='K'||argu[i][0]=='k'||
		argu[i][0]=='A'||argu[i][0]=='a';
		if (coi==1){
			//si es un caracter
			baraja=valor(argu[i][0]);
		}
		else{
			baraja=atoi(argu[i]);
		}
		printf("%i\n", baraja);
	}
	return 0;
}
