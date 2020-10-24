#include<stdio.h>
void ordenar(int V[], int L);
void imprimir(int V[], int L);
void minimo(int V[], int L);
void maximo(int V[], int L);
int main()
{
	int I,N;
	printf("Ingrese el total de elementos para su vector: "); scanf("%d",&N);
	int VECTOR[N];
	for(I=0;I<N;I++){
		printf("VECTOR[%d]: ",I); scanf("%d",&VECTOR[I]);
	}
	minimo(VECTOR,N);
	maximo(VECTOR,N);
	printf("\t\nSe ordenan los elementos.\n\n");
	ordenar(VECTOR,N);
	imprimir(VECTOR,N);
	return 0;
}
void minimo(int V[], int L)
{
	int I,MIN=0;
	for(I=1;I<L;I++){
		if(V[I]<V[MIN]){
			MIN = I;
		}
	}
	printf("El valor menor es %d y se encuentra en la posicion nro: %d.\n\n",V[MIN],MIN);
}
void maximo(int V[], int L)
{
	int I,MAY = L - 1;
	for(I=0;I<L;I++){
		if(V[I]>V[MAY]){
			MAY = I;
		}
	}
	printf("El valor mayor es %d y se encuentra en la posicion nro: %d.\n\n",V[MAY],MAY);
}
void ordenar(int V[], int L)
{
	int I,J,AUX=0;
	for(I=0;I<L;I++){
		for(J=I;J<L;J++){
			if(V[I]>V[J]){
				AUX = V[I];
				V[I] = V[J];
				V[J] = AUX;
			}
		}
	}
}
void imprimir(int V[], int L)
{
	int I;
	for(I=0;I<L;I++){
		printf("VECTOR[%d]: %d\n",I,V[I]);
	}
}
