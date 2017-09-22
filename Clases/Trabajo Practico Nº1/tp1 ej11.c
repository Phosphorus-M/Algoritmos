//11- DESARROLLAR UN DIAGRAMA DE FLUJO PARA QUE SE INGRESE UNA TEMPERATURA EN  GRADOS CENTÍGRADOS 
//Y LUEGO PASARLAA GRADOS KELVIN Y A GRADOS FAHRENHEIT. 

#include <stdio.h>
#include <math.h>

int main (){
	
	float kel=273.15,cel,temp1,temp2;
	
	
	printf ("introduce la temperatura: ");
	
	scanf ("%f",&cel);
	
    temp1=cel+kel;
    temp2=(cel*1.8)+32;
    
    printf ("\nla temperatura en kelvin es : %.2f\n",temp1);
    printf ("\nla temperatura en fahrenheit es : %.2f\n",temp2);
    
}
