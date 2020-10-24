#include<stdio.h>
#include<string.h>
int main()
{
	int cod[5]; /*Codigo de cada producto*/
	char nom[10][9]; /*Nombre del producto*/
	float cos[10]; /*Costo para producir cada producto*/
	int cant[10]; /*Cantidad vendida de "x" producto*/
	float pre[10]; /*Precio del producto*/
	void carga inicial(cod,nom,cos); /*Primero se pide la lista con el codigo, nombre y costo por producto*/
	void imprimir 1(cod,nom,cos); /*Ahora imprime esa lista ingresada*/
}
void carga(int cod[], char nom[][9], float cos[])
{
	int i;
	for(i=0;i<10;i++){
		printf("Ingrese el codigo del producto %d: ",i+1);
		scanf("%d",&cod);
		printf("Ingrese el nombre del producto %d: ",i+1);
		fflush(stdin);
		gets(nom[i]);
		printf("Ingrese el costo del producto %d: ",i+1);
		scanf("%f",&cos);
	}
}
void imprimir 1(int cod[], char nom[][9], float cos[])
{
	int i;
	for(i=0;i<10;i++){
		printf("%10d\t%6s\t%5.2f",cod[i],nom[i],cos[i]);
	}
}
