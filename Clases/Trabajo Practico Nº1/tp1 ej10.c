/*********************************************************************************************************
##                        tp1 ej10.c
##                    -------------------
##          begin:        Friday', September 22', 2017
##          copyright:    ('C) 2017 Katja Werning
##
##          $Id:          tp1 ej10.c, v 1.0 2017/9/22 00:58:45
##
##
**********************************************************************************************************/
//10-DESARROLLE UN ALGORITMO QUE CALCULE LA HIPOTENUSA DE UN TRIÁNGULO RECTÁNGULO CONOCIDAS LAS LONGITUDES DE SUS CATETOS

#include <stdio.h>
#include <math.h>

int main(){
	int a,b,res;
	
	printf ("Ingrese longitudes de cateto 1\n");
	
	scanf ("%i",&a);
	
	printf ("Ingrese longitudes de cateto 2\n");
	
	scanf ("%i",&b);
	
	res=sqrt(a*a+b*b);
	
	printf ("La hipotenusa del triangulo rectangulo es : %i\n",res);
}
