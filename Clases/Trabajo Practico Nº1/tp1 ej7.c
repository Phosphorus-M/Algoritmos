/*********************************************************************************************************
##                        tp1 ej7.c
##                    -------------------
##          begin:        Friday', September 22', 2017
##          copyright:    ('C) 2017 Katja Werning
##
##          $Id:          tp1 ej7.c, v 1.0 2017/9/22 00:52:56
##
##
**********************************************************************************************************/
//7- INGRESAR UN IMPORTE EN PESOS Y MOSTRAR EL 80%, 20% Y 15 % DE DICHO VALOR.

#include <stdio.h>

 int main (){
    float x,p1,p2,p3;

    printf ("Ingrese cantidad de pesos: $");

    scanf ("%f",&x);
   
    p1=(x*80)/100;
    p2=(x*20)/100;
    p3=(x*15)/100;
   
    printf ("El 80 porciento es: %2.f\n",p1);
    printf ("El 20 porciento es: %2.f\n",p2);
    printf ("El 15 porciento es: %2.f\n",p3);
}
