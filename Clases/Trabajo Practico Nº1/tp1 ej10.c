//10-DESARROLLE UN ALGORITMO QUE CALCULE LA HIPOTENUSA DE UN TRIÁNGULO RECTÁNGULO CONOCIDAS LAS LONGITUDES DE SUS CATETOS

#include <stdio.h>
#include <math.h>

int main (void){
	int a,b,res;
	
	printf ("ingrese longitudes de cateto 1\n");
	
	scanf ("%i",&a);
	
	printf ("ingrese longitudes de cateto 2\n");
	
	scanf ("%i",&b);
	
	res=sqrt(a*a+b*b);
	
	printf ("la hipotenusa del triangulo rectangulo es : %i\n",res);

}
