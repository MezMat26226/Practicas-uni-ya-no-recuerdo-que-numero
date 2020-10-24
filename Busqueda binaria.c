#include<stdio.h>
int buscar(int vec[], int l, int v);
int main()
{
	int i,n,valorencontrado=0,valor=0;
	printf("\nCuantos valores desea que tenga su vector?: "); scanf("%d",&n);
	int vector[n];
	for(i=0;i<n;i++){
		printf("VECTOR[%d]: ",i);
		scanf("%d",&vector[i]);
	}
	printf("\nQue valor desea buscar?: "); scanf("%d",&valor);
	valorencontrado = buscar(vector,n,valor);
	printf("\nEl numero %d se encuentra en la posicion %d\n\n",vector[valorencontrado],valorencontrado);
	return 0;
}
int buscar(int vec[], int l, int v)
{
	int alto,medio,bajo=0;
	alto = l - 1;
	while (bajo<=alto){
	medio = (alto+bajo)/2;
		if(vec[medio]==v){
			return medio;
		}
		if(v<vec[medio]){
			alto = medio - 1;
		}
		else{
			bajo = medio + 1;
		}
	}
	return -1;
}
