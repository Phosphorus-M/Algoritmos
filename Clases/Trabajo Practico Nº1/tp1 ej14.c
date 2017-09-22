/*********************************************************************************************************
##                        tp1 ej14.c
##                    -------------------
##          begin:        Friday', September 22', 2017
##          copyright:    ('C) 2017 Katja Werning
##
##          $Id:          tp1 ej14.c, v 1.0 2017/9/22 01:01:00
##
##
**********************************************************************************************************/
//14-DESARROLLE UN ALGORITMO PARA CALCULAR EL IMPORTE DE UNA VENTA EN UN SUPERMERCADO.
//EL USUARIO DEBE INGRESAR  EL NOMBRE DEL PRODUCTO, EL PRECIO POR UNIDAD Y EL NÚMERO DE UNIDADES. 
//EL PROGRAMA MOSTRARÁ POR PANTALLA EL NOMBRE DEL PRODUCTO, EL NÚMERO DE UNIDADES VENDIDAS Y EL PRECIO TOTAL.

#include <stdio.h>
#include <math.h>

int main (){
	int precio,cant,PT;
	char art;

	printf ("Ingrese nombre del producto\n");
	scanf ("%s",&art);
	
	printf ("Ingrese precio del producto\n");
	scanf ("%i",&precio);

	printf ("Ingrese unidades\n");
	scanf ("%i",&cant);

	PT=precio*cant;

	printf ("Nombre del producto: %s\n",art);
	printf ("Unidades vendidas: %i\n",cant);
	printf ("Precio total del producto: %i\n",PT);
}
