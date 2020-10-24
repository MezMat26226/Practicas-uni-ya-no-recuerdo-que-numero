#include<stdio.h>
#include<string.h>
typedef struct{
	char nombre[50];
	char empleo[50];
	int edad;
}reg;
int main(){
	reg f1,f2;
	printf("Introduce valores para el formulario 1: \n");
	printf("Introduce tu nombre: ");
	gets(f1.nombre);
	printf("Introduce tu empleo: ");
	fflush(stdin);
	gets(f1.empleo);
	printf("Introduce tu edad: ");
	scanf("%d",&f1.edad);
	printf("Introduce valores para el formulario 2: \n");
	printf("Introduce tu nombre: ");
	fflush(stdin);
	gets(f2.nombre);
	printf("Introduce tu empleo: ");
	fflush(stdin);
	gets(f2.empleo);
	printf("Introduce tu edad: ");
	scanf("%d",&f2.edad);
	printf("Los valores son: \n");
	printf("El nombre de f1: %s\n",f1.nombre);
	printf("El nombre de f2: %s\n",f2.nombre);
	printf("El empleo de f1: %s\n",f1.empleo);
	printf("El empleo de f2: %s\n",f2.empleo);
	printf("La edad de f1: %d.\n",f1.edad);
	printf("La edad de f2: %d.\n",f2.edad);
	return 0;
}
