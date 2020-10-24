#include<stdio.h>
int minimo(int v[], int l);
int maximo(int v[], int l);
void cambio(int v[], int l);
int main()
{
	int i,n,posmin,posmax;
	printf("Ingrese el numero de elementos para su vector: "); scanf("%d",&n);
	int vector[n];
	for(i=0;i<n;i++){
		printf("Vector[%d]: ",i); scanf("%d",&vector[i]);
	}
	posmin = minimo(vector,n);
	posmax = maximo(vector,n);
	printf("El valor menor es %d y se encuentra en la posicion nro: %d\n",vector[posmin],posmin);
	printf("El valor mayor es %d y se encuentra en la posicion nro: %d\n",vector[posmax],posmax);
	cambio(vector,n);
	return 0;
}
int minimo(int v[], int l)
{
	int i,min=0;
	for(i=1;i<l;i++){
		if(v[i]<v[min]){
			min = i;
		}
	}
	return min;
}
int maximo(int v[], int l)
{
	int i,max= l - 1;
	for(i=0;i<l;i++){
		if(v[i]>v[max]){
			max = i;
		}
	}
	return max;
}
void cambio(int v[], int l)
{
	int i,aux,posmin=0;
	for(i=0;i<l;i++){
		if(v[i]<v[posmin]){
			posmin = i;
		}
	}
	aux = v[0];
	v[0] = v[posmin];
	v[posmin] = aux;
	printf("\n %d\n",v[0]);
	printf("\n %d\n",v[posmin]);
}
