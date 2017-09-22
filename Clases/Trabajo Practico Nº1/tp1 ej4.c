/*********************************************************************************************************
##                        tp1 ej4.c
##                    -------------------
##          begin:        Friday', September 22', 2017
##          copyright:    ('C) 2017 Katja Werning
##
##          $Id:          tp1 ej4.c, v 1.0 2017/9/22 00:46:13
##
##
**********************************************************************************************************/
//DESARROLLAR UN DIAGRAMA DE FLUJO PARA QUE PIDA 2 VALORES Y REALIZA EL CÁLCULO (A+B)*(A-B).

#include <stdio.h>

int main (){
	int a,b,R,R1,RT;
	
	printf ("Ingresar valores para a y b\n");
	
	scanf ("%i",&a);
	scanf ("%i",&b);
	
	R=a+b;
	R1=a-b;
	RT=R*R1;
	
	printf ("El resultado del calculo (A+b)*(A-b) es: %i\n",RT);
}

