//DESARROLLAR UN DIAGRAMA DE FLUJO PARA QUE PIDA 2 VALORES Y REALIZA EL CÁLCULO (A+B)*(A-B).

#include <stdio.h>

int main (){
	int a,b,R,R1,RT;
	
	printf ("ingresar valores para a y b\n");
	
	scanf ("%i",&a);
	scanf ("%i",&b);
	
	
	R=a+b;
	R1=a-b;
	RT=R*R1;
	
	printf ("el resultado del calculo (A+b)*(A-b) es : %i\n",RT);
	
	
}

