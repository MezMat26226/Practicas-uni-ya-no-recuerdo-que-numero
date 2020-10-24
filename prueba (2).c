#include<stdio.h>
#include<string.h>
void carga(int [], char [][9], float []);
void impresion(int [], char [][9], float []);
int main()
{
	int cod[5];
	char nom[5][9];
	float cos[5];
	carga(cod,nom,cos);
	impresion(cod,nom,cos);
	int ven[20];
}
void carga(int cod[], char nom[][9], float cos[])
{
	int i;
	for(i=0;i<5;i++){
		printf("\nIngrese el codigo del producto numero %d: ",i+1);
		scanf("%d",&cod[i]);
		printf("\n");
		printf("Ingrese el nombre del producto %d: ",i+1);
		fflush(stdin);
		gets(nom[i]);
		printf("\n");
		printf("Ingrese el costo de produccion del producto %d: ",i+1);
		scanf("%f",&cos[i]);
	}
}
void impresion(int cod[], char nom[][9], float cos[])
{
	int i;
	printf("\nLista incial de productos.\n\n");
	for(i=0;i<5;i++){
		printf("Producto %d) Codigo: %d.\tNombre: %s.\tCosto por prod.: %f.\n",i+1,cod[i],nom[i],cos[i]);
	}
}
/*
void ventas(int ven[])
{
	int i,cont=0;
	printf("\n\nDigite un numero para notificar una nueva venta\n\n");
	printf("Finalice con 0.\n");
	do{
		printf("1 al 9 para una nueva venta: ");
		scanf("%d",&ven[i]);
		if(ven[i]>0){
			cont += 1;
		}
	}
} */
