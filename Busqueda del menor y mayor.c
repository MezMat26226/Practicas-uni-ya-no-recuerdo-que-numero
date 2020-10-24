#include<stdio.h>
void funcion(int V[], int L);
void funcion2(int V[], int L);
int main()
{
	int I,LARGO,MENOR;
	printf("Ingrese el total de elementos para su vector: "); scanf("%d",&LARGO);
	int VECTOR[LARGO];
	for(I=0;I<LARGO;I++){
		printf("VECTOR[%d]: ",I); scanf("%d",&VECTOR[I]);
	}
	funcion(VECTOR,LARGO);
	funcion2(VECTOR,LARGO);
	system("pause");
	return 0;
}
void funcion(int V[], int L)
{
	int I,MIN=0;
	for(I=1;I<L;I++){
		if(V[I]<V[MIN]){
			MIN = I; //Es la posición del numero buscado
		}           //Lo que guardo es la posicion del numero buscado
	}
	printf("El valor menor es %d y se encuentra en  la posicion nro: %d\n",V[MIN],MIN);
}
void funcion2(int V[], int L)
{
	int I,MAX = L - 1;
	for(I=0;I<L;I++){
		if(V[MAX]<V[I]){ //Mientras que, esta es la comparacion para encontrar al numero
			MAX = I; 
		}
	}
	printf("El valor mayor es %d y se encuentra en la posicion nro: %d\n",V[MAX],MAX);
}
