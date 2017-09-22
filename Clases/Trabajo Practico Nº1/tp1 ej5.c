/*********************************************************************************************************
##                        tp1 ej5.c
##                    -------------------
##          begin:        Friday', September 22', 2017
##          copyright:    ('C) 2017 Katja Werning
##
##          $Id:          tp1 ej5.c, v 1.0 2017/9/22 00:48:13
##
##
**********************************************************************************************************/
//5-ESCRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN NÚMERO INTRODUCIENDO EL NÚMERO BASE Y EL EXPONENTE.

#include <stdio.h>
#include<math.h>
int main (){
	
	int x,y,R;
	
	printf ("Introduce numero base: ");
	scanf ("%i",&x);
	
	printf ("Introduce exponente: ");
	scanf ("%i",&y);
	
    R=pow(x,y);
	
	printf ("La potencia es : %i",R);
}
