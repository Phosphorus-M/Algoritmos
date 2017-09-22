//8- ESCRIBIR UN ALGORITMO QUE PIDA UNA CANTIDAD EN PESOS ARGENTINOS 
//Y LA CONVIERTA EN DÓLARES ESTADOUNIDENSES (1 DÓLAR ESTADOUNIDENSE = 15.40  PESOS ARGENTINOS).

#include <stdio.h>



int main (){
	float dol,total;
	float pes;
	
	dol=15.40;
	
	printf ("ingrese cantidad de pesos a convertir: ");
	scanf ("%f",&pes);
	
	
total=pes/dol;
	
	printf ("la cantidad convertida es de : %.2f\n",total);
}
