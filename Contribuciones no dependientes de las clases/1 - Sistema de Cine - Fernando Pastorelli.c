/***************************************************************************
##                        cinema system.c
##                    -------------------
##          begin:        Tuesday', June 27', 2017
##          copyright:    ('C) 2017 Phosphorus Moscu
##          email:        fernando.n.p.d.moscu@gmail.com
##
##          $Id:          cinema system.c, v 0.00.5 2017/7/2 15:55:40
##
##
***************************************************************************/

/***************************************************************************
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License', or
 *   ('at your option) any later version.
 *
 ***************************************************************************/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
void clrscr(){
	system("cls||clear");
}
void pantalla(int asientos[6][59], int i, int x){
	printf("\t\t\t\t\t\tPantalla\n");
	for (i = 0; i <= 6; i++) {
		for (x = 0; x < 60; x++) {
			printf("%i\t", asientos[i][x]);
		}
		printf("\n");
	}
	printf("Esto no se limpia :( %i\n", asientos[6][4]);
	getch();
}
void error_generico() {
	printf("Ingrese un valor valido\n");
	getch();
	clrscr();
}

int menu(int *menu) {
	printf("Ingresar una opci%cn:\n", 162);
	printf("\t1 - Comprar un boleto\n\t2 - Mostrar informaci%cn de ventas\n\t3 - Guardar en un archivo todo.\n\t4 - Leer datos de archivos anteriores.\n\t5 - Ver disponibilidad de butacas\n\t6 - Salir del programa.\n", 162);
	printf("\n\nRESPUESTA: ");
	fflush(stdin);
	scanf("%i", menu);
}
int comprar(int *sala,  int asientos[6][59], int *i, int *x, int *Reservas){
	int C, sale;
	printf("Ingresar a que sala desea ingresar\n");
	scanf("%i", sala);
	printf("Ingresar la cantidad de reservas\n");
	scanf("%i", Reservas);
//aca empieza el bucle
for (*i = 0; *i < 6; *i=*i+1) {
	for (*x = 0; *x < 60; *x=*x+1) {
		printf("%i\t", asientos[*i][*x]);
	}
	printf("\n");
}
	for (C = 0; C < *Reservas; C++) {
		do{
			do {
				printf("Ingrese la fila (Numeros entre 1 y 7)\n");
				fflush(stdin);
				scanf("%i", i);
				if (*i<=-1) {
					error_generico();
				}
			} while(*i<=1 && *i>=7);
			*i=*i-1;
			do {
				printf("Ingresar el asiento con un numero entre el 1 y el 60\n");
				fflush(stdin);
				scanf("%i", x);
				*x=*x-1;
				if (*x<=-1) {
					error_generico();
				}
			} while(*x<=-1 && *x>59);

			if ((asientos[*i][*x]) != 0){
				printf("El asiento esta ocupado por alguien m%cs, por favor selecione otro asiento\n", 160);
				getch();
				clrscr();
			}else{
				asientos[*i][*x] = 1;
				sale=1;
			}
		}while(sale != 1);
	}
}

void array(int asientos[6][59], int i, int x){
		for (i = 0; i <= 6; i++) {
			for (x = 0; x <= 59; x++) {
				asientos[i][x]=0;
				printf("%i\t", asientos[i][x]);
			}
			printf("\n");
		}
}

int main() {
  int opcion=1, sale=0;
	int sala=0;
	int asientos[6][59]={{0},{0}};
	int i=0;
	int x=0;
	int Reservas=0;
	array(asientos,i,x);

	while (sale == 0) {
		menu(&opcion);
		switch (opcion) {
      case 1:{
        clrscr();
				comprar(&sala, asientos, &i, &x, &Reservas);
				printf("asiento %i \n", asientos[i][x]);
				printf("i= %i \n", i);
				printf("x= %i \n", x);
				printf("asiento = %i \n", asientos);
        system("pause");
        clrscr();
        break;
      }
			case 5:{
				pantalla(asientos,i,x);
				system("pause");
				clrscr();
        break;
			}
      case 6:{
				clrscr();
        sale=1;
        break;
      }
      default:{
        clrscr();
  			error_generico();
  			system("pause");
        clrscr();
      }
    }
  }
}

