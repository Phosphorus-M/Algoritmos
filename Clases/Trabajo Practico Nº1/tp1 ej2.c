/*********************************************************************************************************
##                        tp1 ej2.c
##                    -------------------
##          begin:        Friday', September 22', 2017
##          copyright:    ('C) 2017 Katja Werning
##
##          $Id:          tp1 ej2.c, v 1.0 2017/9/22 00:40:10
##
##
**********************************************************************************************************/
//ESCRIBIR UN PROGRAMA QUE LEA EXACTAMENTE  3 N�MEROS Y LUEGO ESCRIBA LA SUMA DE TODOS ELLOS. 

#include <stdio.h>

int main () {
	int v1,v2,v3,R;

	printf ("Ingrese los numeros que desea sumar:\n");
	
	scanf ("%i",&v1);
	scanf ("%i",&v2);
	scanf ("%i",&v3);
	
	R=v1+v2+v3;

	printf ("La suma total es %i",R);
}
