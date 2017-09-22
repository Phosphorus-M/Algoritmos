/*********************************************************************************************************
##                        tp1 ej8.c
##                    -------------------
##          begin:        Friday', September 22', 2017
##          copyright:    ('C) 2017 Katja Werning
##
##          $Id:          tp1 ej8.c, v 1.0 2017/9/22 01:2:26
##
##
**********************************************************************************************************/
//8- ESCRIBIR UN ALGORITMO QUE PIDA UNA CANTIDAD EN PESOS ARGENTINOS 
//Y LA CONVIERTA EN DÓLARES ESTADOUNIDENSES (1 DÓLAR ESTADOUNIDENSE = 15.40  PESOS ARGENTINOS).

#include <stdio.h>

int main(){
	float dol,total;
	float pes;

	dol=15.40;

	printf ("Ingrese cantidad de pesos a convertir: ");
	scanf ("%f",&pes);


	total=pes/dol;

	printf ("La cantidad convertida es de: %.2f\n",total);
}
