//5-ESCRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN N�MERO INTRODUCIENDO EL N�MERO BASE Y EL EXPONENTE.

#include <stdio.h>
#include<math.h>
int main (){
	
	
	int x,y,R;
	
	printf ("Introduce numero base");
	scanf ("%i",&x);
	
	printf ("introduce exponente");
	scanf ("%i",&y);
	
    R=pow(x,y);
	
	printf ("la potencia es : %i",R);
	
}
