#include<stdio.h>

#include<stdlib.h>

int main(){

	int opc=0;

    float a=0,b=0,c=-10;

    while(c==-10){

	printf("\n 1- Suma");

	printf("\n 2- Resta");

	printf("\n 3- Multiplicaciòn");

	printf("\n 4- Divisiòn");

	printf("\n Seleccione una opciòn: ");

	scanf("%d",&opc);

	printf("Ingrese el valor de a: ");

	scanf("%f",&a);

	printf("Ingrese el valor de b: ");

	scanf("%f",&b);

	switch(opc){
	 case 1:
		c=a+b;
        break;

     case 2:
		c=a-b;
        break;

     case 3:
        c=a*b;
        break;

	 case 4:
		while(b==0){

		printf("Ingrese un valor vàlido para b:");

		scanf("%f",&b);
		}
		c=a/b;
        break;
	default:

		system("cls");

		printf("Elija una opcion valida: ");

		c=-10;

	}

    system("cls");

	printf("El resultado de la operacion es: %.2f",c);

}}
