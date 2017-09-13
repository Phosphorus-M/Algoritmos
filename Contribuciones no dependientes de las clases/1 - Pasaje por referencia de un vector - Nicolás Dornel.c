/*********************************************************************************************************
##                        1 - Pasaje por referencia de un vector - Nicolás Dornel.c
##                    -------------------
##          begin:        Wednesday', September 13', 2017
##          copyright:    ('C) 2017 Nicolás Dornel
##
##          $Id:          1 - Pasaje por referencia de un vector - Nicolás Dornel.c, v 1.0 2017/9/13 1:19:40
##
##
**********************************************************************************************************/
#include<stdio.h>
#include<stdbool.h>

int fun_menu();
int fun_ingresar(int *vec[]);
int fun_mostrar(int *vec[]);

int main(){
	
	int menu=1,vec[3];
	bool res=false;
	
	do{
		do{	
			system("cls");
			if(menu<1||menu>3){
				system("cls");
				printf("\n\"Numero incorreto\"\n");
				getch();
				system("cls");
			}
			fun_menu();
			printf("\n\nRespuesta: ");
			scanf("%i",&menu);
			
			switch(menu){
				case 1:{
					res=true;
					fun_ingresar(&vec);
					getch();
					break;
				}
				
				case 2:{
					if(res==true){
						fun_mostrar(&vec);
					}else{
						printf("\nEl vector esta vacio");
						getch();
					}
					break;
				}
				case 3:{
					return 1;
					break;
				}					
			}	
		}while(menu<1||menu>3);
	}while (menu!=3);
	
	getch();
}

int fun_menu(){
	printf("Elija una Opci%cn\n",162);
	
	printf("\n1)-->Ingresar numeros al vector");
	printf("\n2)-->Mostrar numeros del vector");
	printf("\n3)-->Salir");
}

int fun_ingresar(int *vec[]){
	int i;
	for(i=0;i<3;i++){
		printf("\n\nIngrese un numero a la pocion %i del vector: ",i);
		scanf("%i", &vec[i]);
	}
}
int fun_mostrar(int *vec[]){
	int i;
	for(i=0;i<3;i++){
		printf("\n\nPocion %i en el vector es: %i",i,vec[i]);
	}
	getch();		
}
