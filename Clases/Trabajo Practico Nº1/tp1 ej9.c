//9  - DESARROLLE UN ALGORITMO QUE PERMITA DETERMINAR EL ÁREA Y VOLUMEN DE UN CILINDRO DADO SU RADIO Y SU ALTURA.

#include <stdio.h>

int main (){
	
	int radio,altu,R,vol,area1;
	double PI;
	
	PI=3.1416;
	
	printf ("ingrese radio del cilindro: ");
	scanf ("%i",&radio);
	
	printf ("ingrese area del cilindro: ");
	scanf ("%i",&altu);
	
	area1=2*PI*radio*altu;
	R=pow(radio,2);
	vol=PI*R*altu;
	
	printf("el area del cilindro es: %i\n ",area1);
	printf ("el volumen del cilindro es: %i\n",vol);
	
	
}
