//13- INGRESAR TRES VALORES AMBIENTALES DE TEMPERATURAS Y CALCULAR E INFORMAR LA SUMA Y EL PROMEDIO DE DICHOS VALORES.

#include <stdio.h>
 
 int main (){
 	int a,b,c,res,pro;
 	
 	printf ("ingrese 3 valores de temperaturas\n");
 	
 	scanf ("%i",&a);
 	scanf ("%i",&b);
 	scanf ("%i",&c);
 	
 	res=a+b+c;
 	pro=res/3;
 	
 	printf ("la suma de las temperaturas es de : %i\n",res);
 	printf ("el promedio de las temperaturas es de : %i\n",pro);
 	
 }
