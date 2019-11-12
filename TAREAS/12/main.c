#include<stdio.h>
#include<stdlib.h>

int saludos(int personas){
	int i, a=0;
	for(i=0; i<personas; i++){
		a=a+i;
	}
	return a;
}

int main (int argc, char *argv[]) {
	int persona, total;
	persona=atoi(argv[1]);
	
	total=saludos(persona);
	
	printf("%i\n", total);
	return 0;
}
