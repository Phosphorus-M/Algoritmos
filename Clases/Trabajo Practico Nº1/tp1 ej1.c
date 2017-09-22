//1- ESCRIBIR UN ALGORITMO  QUE PIDA, NOMBRE, APELLIDO, TELÉFONO Y EDAD DE UNA PERSONA Y LUEGO LO MUESTRE POR PANTALLA


#include <stdio.h>

int main (){
	
	char  nom [20],apell [20];//caracter nombre
	int  edad,telef;//entero
     
	printf ("ingrese nombre: ");
	
	scanf ("%s",&nom);
	
	printf ("ingrese apellido: ");
	
	scanf ("%s",&apell);
	
	printf ("ingrese telefono: ");
	
	scanf ("%i",&telef);
	
	printf ("ingrese edad: ");
	
	scanf ("%i",&edad);
	
	
printf ("\n su nombre es : %s \n ",nom);
printf ("\n su apellido esn : %s \n  ",apell);
printf ("\n su telefono es : %i \n ",telef);
printf ("\n su edad es : %i \n ",edad);

system("pause");
return 0;

	
}
