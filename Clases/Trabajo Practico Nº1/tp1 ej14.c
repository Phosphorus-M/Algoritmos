//14-DESARROLLE UN ALGORITMO PARA CALCULAR EL IMPORTE DE UNA VENTA EN UN SUPERMERCADO.
 //EL USUARIO DEBE INGRESAR  EL NOMBRE DEL PRODUCTO, EL PRECIO POR UNIDAD Y EL NÚMERO DE UNIDADES. 
//EL PROGRAMA MOSTRARÁ POR PANTALLA EL NOMBRE DEL PRODUCTO, EL NÚMERO DE UNIDADES VENDIDAS Y EL PRECIO TOTAL.

#include <stdio.h>
#include <math.h>

int main (){
	int precio,cant,PT;
	char art;
	
	printf ("ingrese nombre del producto\n");
	scanf ("%s",&art);
	
	printf ("ingrese precio del producto\n");
	scanf ("%i",&precio);
	
	printf ("ingrese unidades\n");
	scanf ("%i",&cant);
	
	PT=precio*cant;
	
	printf ("nombre del producto : %s\n",art);
	printf ("unidades vendidas : %i\n",cant);
	printf ("precio total del producto : %i\n",PT);
	
	
	
}
