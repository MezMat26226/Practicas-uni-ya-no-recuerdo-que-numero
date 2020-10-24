#include<stdio.h>
#include<string.h>
void carga(char [][20], float []);
void impresion(char [][20], float []);
void ventas(int [], int [], float []);
void comp(float [], float [], int []);
int main()
{
	int cod[5];
	char nom[5][20];
	float cos[5];
	float pre[5];
	int ven[5];
	carga(nom,cos);
	impresion(nom,cos);
	ventas(cod,ven,pre);
	comp(pre,cos,cod);
}
void carga(char nom[][20], float cos[])
{
	int i;
	for(i=0;i<5;i++){
		printf("Ingrese el nombre del producto %d: ",i+1);
		fflush(stdin);
		gets(nom[i]);
		printf("\n");
		printf("Ingrese el costo de produccion del producto %d: ",i+1);
		scanf("%f",&cos[i]);
		printf("\n");
	}
}
void impresion(char nom[][20], float cos[])
{
	int i;
	printf("\nLista incial de productos.\n\n");
	for(i=0;i<5;i++){
		printf("\nProducto %d) Nombre: %s. \tCosto por produccion: $%f.\n\n",i+1,nom[i],cos[i]);
	}
}
void ventas(int cod[], int ven[], float pre[])
{
	int i,j=0,k=0;
	for(i=0;i<5;i++){
		printf("Ingrese el precio unitario del producto %d: ",i+1);
 		scanf("%f",&pre[i]);
	}
	for(i=0;(i<5)&&(j!=-1);i++){
 		printf("\n");
 		printf("Cuantas unidades se vendieron del producto %d?: ",i+1);
 		scanf("%d",&ven[i]);
 		printf("\n");
 		printf("Ingrese el codigo del producto %d: ",i+1);
 		scanf("%d",&cod[i]);
 		printf("\n");
 		if(cod[i]>0){
 			k += 1;
		 }
 		else if(cod[i]==0){
 			j = -1;
		 }
	 }
	 for(i=0;i<=k;i++){
	 	printf("Producto %d) Codigo: %d. \tUnidades vendidas: %d. \tPrecio unitario: $%f.\n",i+1,cod[i],ven[i],pre[i]);
	 }
}
void comp(float pre[], float cos[], int cod[])
{
	int i;
	for(i=0;i<5;i++){
		if(pre[i]<cos[i]){
			printf("Venta del producto %d por debajo del costo.\n",cod[i]);
		}
	}
}
