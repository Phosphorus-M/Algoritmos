/*********************************************************************************************************
##                        tp1 ej6.c
##                    -------------------
##          begin:        Friday', September 22', 2017
##          copyright:    ('C) 2017 Katja Werning
##
##          $Id:          tp1 ej6.c, v 1.0 2017/9/22 00:50:27
##
##
**********************************************************************************************************/
//6-INGRESAR 3 N�MEROS E IMPRIMIR EL DOBLE, EL TRIPLE Y LA MITAD DE CADA UNO.

#include <stdio.h>
#include <math.h>

int main (){
	float a,b,c,dobA,tripA,mitA,dobb,tripb,mitb,dobc,tripc,mitc;
	
	printf ("Ingrese 3 numeros:\n");
	
	scanf ("%f",&a);
	scanf ("%f",&b);
	scanf ("%f",&c);
	
	dobA=a*2;
	tripA=a*3;
	mitA=a/2;
	
	dobb=b*2;
	tripb=b*3;
	mitb=b/2;
	
	dobc=c*2;
	tripc=c*3;
	mitc=c/2;
	
	printf ("Los resultados son:\n");
	printf ("Doble de A: %2.f\n",dobA);
	printf ("Triple de A: %2.f\n",tripA);
	printf ("La mitad de A: %f\n",mitA);
	
	printf ("Doble de B: %2.f\n",dobb);
	printf ("Triple de B: %2.f\n",tripb);
	printf ("La mitad de B: %f\n",mitb);
	
	printf ("Doble de C: %2.f\n",dobc);
	printf ("Triple de C: %2.f\n",tripc);
	printf ("La mitad de C: %f\n",mitc);
}
