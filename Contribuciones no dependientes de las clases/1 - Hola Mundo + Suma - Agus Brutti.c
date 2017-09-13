/*********************************************************************************************************
##                        1 - Hola Mundo + Suma - Agus Brutti.c
##                    -------------------
##          begin:        Sunday', September 3', 2017
##          copyright:    ('C) 2017 Agustin Brutti
##
##          $Id:          1 - Hola Mundo + Suma - Agus Brutti.c, v 1.0 2017/9/13 1:19:40
##
##
**********************************************************************************************************/
#include <stdio.h>
#include <locale.h>

int Ingresar ();
int Suma ();

void main ()
{
	setlocale (LC_CTYPE, "spanish");
	char nombre[20];
	int num;
	printf ("Hola, como es tu nombre?:> ");
	gets (nombre);
	fflush (stdin);

	printf("Hola %s\n", nombre);

	printf ("Tu número es: %d\n", Ingresar());
	printf ("El resultado de la suma es %d\n", Suma());

	getch ();	
}

int Ingresar (int num)
{
	printf ("Ingresa un número entero:> ");
	scanf ("%d", &num);
	return num;
}

int Suma (int num, int num2)
{
	int result;
	printf ("\n\nIngrese primer número: ");
	scanf ("%d",&num);
	fflush (stdin);
	printf ("\nIngrese segundo número: ");
	scanf ("%d",&num2);
	
	result = num + num2;

	return result;
	
	if (num > num2) printf ("\n\nEl mayor es %d", num);
	else printf ("El mayor es %d", num2);
}
