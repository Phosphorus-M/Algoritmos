/*********************************************************************************************************
##                        tp1 ej11.c
##                    -------------------
##          begin:        Friday', September 22', 2017
##          copyright:    ('C) 2017 Katja Werning
##
##          $Id:          tp1 ej11.c, v 1.0 2017/9/22 00:58:57
##
##
**********************************************************************************************************/
//11- DESARROLLAR UN DIAGRAMA DE FLUJO PARA QUE SE INGRESE UNA TEMPERATURA EN  GRADOS CENTÍGRADOS 
//Y LUEGO PASARLAA GRADOS KELVIN Y A GRADOS FAHRENHEIT. 

#include <stdio.h>
#include <math.h>

int main (){
	float kel=273.15,cel,temp1,temp2;

	printf ("Introduce la temperatura: ");
	scanf ("%f",&cel);

    temp1=cel+kel;
    temp2=(cel*1.8)+32;

    printf ("La temperatura en kelvin es : %.2f\n",temp1);
    printf ("La temperatura en fahrenheit es : %.2f\n",temp2);
}
