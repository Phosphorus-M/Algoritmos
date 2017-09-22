/*********************************************************************************************************
##                        tp1 ej1.c
##                    -------------------
##          begin:        Friday', September 22', 2017
##          copyright:    ('C) 2017 Katja Werning
##
##          $Id:          tp1 ej1.c, v 1.0 2017/9/22 00:42:40
##
##
**********************************************************************************************************/
//1- ESCRIBIR UN ALGORITMO  QUE PIDA, NOMBRE, APELLIDO, TELÉFONO Y EDAD DE UNA PERSONA Y LUEGO LO MUESTRE POR PANTALLA

#include <stdio.h>

int main (){
	
	char  nom [20],apell [20];//caracter nombre
	int  edad,telef;//entero
     
	printf ("Ingrese nombre: ");
	
	scanf ("%s",&nom);
	
	printf ("Ingrese apellido: ");
	
	scanf ("%s",&apell);
	
	printf ("Ingrese telefono: ");
	
	scanf ("%i",&telef);
	
	printf ("Ingrese edad: ");
	
	scanf ("%i",&edad);
	
	
printf ("\nSu nombre es : %s \n",nom);
printf ("Su apellido esn : %s \n",apell);
printf ("Su telefono es : %i \n",telef);
printf ("Su edad es : %i \n",edad);

system("pause");
return 0;
}
