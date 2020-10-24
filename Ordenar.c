#include<stdio.h>
void ordenar(int v[], int l);
void imprimir(int v[], int l);
int main()
{
	int i,n;
	printf("Ingrese el total de elementos para su vector: "); scanf("%d",&n);
	int vector[n];
	for(i=0;i<n;i++){
		printf("Vector[%d]: ",i); scanf("%d",&vector[i]);
	}
	ordenar(vector,n);
	imprimir(vector,n);
	return 0;
}
void ordenar(int v[], int l)
{
	int i,j,aux;
	for(i=0;i<l;i++){
		for(j=i;j<l;j++){
			if(v[i]>v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}
void imprimir(int v[], int l)
{
	int i;
	for(i=0;i<l;i++){
		printf("VECTOR[%d]: %d.\n",i,v[i]);
	}
}
