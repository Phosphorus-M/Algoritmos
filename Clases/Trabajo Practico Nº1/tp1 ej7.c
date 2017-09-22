//7- INGRESAR UN IMPORTE EN PESOS Y MOSTRAR EL 80%, 20% Y 15 % DE DICHO VALOR.

#include <stdio.h>
#include <stdlib.h>

 int main (void) {
    float x,p1,p2,p3;

    printf ("ingrese cantidad de pesos:$");
    
    scanf ("%f",&x);
    
    p1=(x*80)/100;
    p2=(x*20)/100;
    p3=(x*15)/100;
    
    printf ("el 80 porciento es : %2.f\n",p1);
    printf ("el 20 porciento es : %2.f\n",p2);
    printf ("el 15 porciento es : %2.f\n",p3);
    
    
 }
