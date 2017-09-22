/*********************************************************************************************************
##                        tp1 ej9.c
##                    -------------------
##          begin:        Friday', September 22', 2017
##          copyright:    ('C) 2017 Katja Werning
##
##          $Id:          tp1 ej9.c, v 1.0 2017/9/22 00:53:32
##
##
**********************************************************************************************************/
//9  - DESARROLLE UN ALGORITMO QUE PERMITA DETERMINAR EL ÁREA Y VOLUMEN DE UN CILINDRO DADO SU RADIO Y SU ALTURA.

#include <stdio.h>

int main (){

	int radio,altu,R,vol,area1;
	double PI;
	
	PI=3.1416;

	printf ("Ingrese radio del cilindro: ");
	scanf ("%i",&radio);

	printf ("Ingrese area del cilindro: ");
	scanf ("%i",&altu);

	area1=2*PI*radio*altu;
	R=pow(radio,2);
	vol=PI*R*altu;

	printf("El area del cilindro es: %i\n ",area1);
	printf ("El volumen del cilindro es: %i\n",vol);
}
