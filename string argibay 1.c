#include<stdio.h>
#include<string.h>
#define N 10
#define M 20
int main()
{
	char CAD[N][M], PALABRA[M];
	int I,POS = -1;
	printf("Ingrese 10 palabras.\n\n");
	/*INGRESO*/
	for(I=0;I<N;I++){
		printf("Palabra numero %d: ",I+1);
		gets(CAD[I]);
	}
	/////////////
	printf("Ingrese palabra a buscar: ");
	gets(PALABRA);
	/*BUSQUEDA*/
	for(I=0;I<N;I++){
		if(strcmp(CAD[I],PALABRA)==0){
			POS = I+1;
		}
	}
	/*IMPRESION*/
	for(I=0;I<N;I++){
		printf("\n%10d\t%s",I,CAD[I]);
	}
	printf("\n\n");
	if(POS>=0){
		printf("%s estan en la posicion numero %d\n\n",PALABRA,POS);
	}
	else{
		printf("No se encontro la palabra.\n\n");
	}
	printf("Fin del programa.");
}
