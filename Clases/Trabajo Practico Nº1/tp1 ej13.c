/*********************************************************************************************************
##                        tp1 ej13.c
##                    -------------------
##          begin:        Friday', September 22', 2017
##          copyright:    ('C) 2017 Katja Werning
##
##          $Id:          tp1 ej13.c, v 1.0 2017/9/22 01:00:23
##
##
**********************************************************************************************************/
//13- INGRESAR TRES VALORES AMBIENTALES DE TEMPERATURAS Y CALCULAR E INFORMAR LA SUMA Y EL PROMEDIO DE DICHOS VALORES.

#include <stdio.h>
 
 int main (){
 	int a,b,c,res,pro;

 	printf ("Ingrese 3 valores de temperaturas\n");
	
 	scanf ("%i",&a);
 	scanf ("%i",&b);
 	scanf ("%i",&c);
	
 	res=a+b+c;
 	pro=res/3;
	
 	printf ("La suma de las temperaturas es de : %i\n",res);
 	printf ("El promedio de las temperaturas es de : %i\n",pro);
 }
