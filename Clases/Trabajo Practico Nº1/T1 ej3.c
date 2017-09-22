//3-ESCRIBIR UN ALGORITMO EN EL CUAL SE INGRESAN DOS VARIABLES A Y B.
//REALICE LA SUMA, LA RESTA, LA DIVISIÓN Y LA MULTIPLICACIÓN DE A CON B.
 //MUESTRE LOS CUATRO RESULTADOS POR PANTALLA.  
 //LUEGO INTERCAMBIE EL VALOR DE LAS DOS VARIABLES Y MOSTRAR LOS VALORES INTERCAMBIADOS.
 
 #include <stdio.h>
 
 int main () {
 	int x,y,R,R1,R2,R3,R4,R5,R6,R7;
 	
 	printf ("ingrese valor para x\n");
 	
 	scanf ("%i",&x);
 	
 	printf ("ingrese valor para y\n");
 	
 	scanf ("%i",&y);
 	
 	R=x+y;
 	
 	R1=x-y;
 	
 	R2=x/y;
 	
 	R3=x*y;
 	
 	printf ("el resultado de la suma es %i\n",R);
 	printf ("el resultado de la resta es %i\n",R1);
 	printf ("el resultado de la division es %i\n",R2);
 	printf ("el resultado de la multiplicacion es %i\n",R3);
 	
 	printf ("los valores intercambiados son:\n");
 	
 	R4=y+x;
 	
 	R5=y-x;
 	
 	R6=y/x;
 	
 	R7=y*x;
 	
 	printf ("el resultado de la suma es %i\n",R4);
 	printf ("el resultado de la resta es %i\n",R5);
 	printf ("el resultado de la division es %i\n",R6);
 	printf ("el resultado de la multiplicacion es %i\n",R7);
 	
 	
 	
 	
 }
