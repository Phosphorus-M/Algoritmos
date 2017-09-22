/*********************************************************************************************************
##                        tp1 ej3.c
##                    -------------------
##          begin:        Friday', September 22', 2017
##          copyright:    ('C) 2017 Katja Werning
##
##          $Id:          tp1 ej3.c, v 1.0 2017/9/22 00:43:13
##
##
**********************************************************************************************************/
//3-ESCRIBIR UN ALGORITMO EN EL CUAL SE INGRESAN DOS VARIABLES A Y B.
//REALICE LA SUMA, LA RESTA, LA DIVISIÓN Y LA MULTIPLICACIÓN DE A CON B.
//MUESTRE LOS CUATRO RESULTADOS POR PANTALLA.  
//LUEGO INTERCAMBIE EL VALOR DE LAS DOS VARIABLES Y MOSTRAR LOS VALORES INTERCAMBIADOS.
 
#include <stdio.h>
 
int main () {
 	int x,y,R,R1,R2,R3,R4,R5,R6,R7;
 	
 	printf ("Ingrese valor para x\n");
 	
 	scanf ("%i",&x);
 	
 	printf ("Ingrese valor para y\n");
 	
 	scanf ("%i",&y);
 	
 	R=x+y;
 	
 	R1=x-y;
 	
 	R2=x/y;
 	
 	R3=x*y;
 	
 	printf ("El resultado de la suma es %i\n",R);
 	printf ("El resultado de la resta es %i\n",R1);
 	printf ("El resultado de la division es %i\n",R2);
 	printf ("El resultado de la multiplicacion es %i\n",R3);
 	
 	printf ("Los valores intercambiados son:\n");
 	
 	R4=y+x;
 	
 	R5=y-x;
 	
 	R6=y/x;
 	
 	R7=y*x;
 	
 	printf ("El resultado de la suma es %i\n",R4);
 	printf ("El resultado de la resta es %i\n",R5);
 	printf ("El resultado de la division es %i\n",R6);
 	printf ("El resultado de la multiplicacion es %i\n",R7);
 	
 }
