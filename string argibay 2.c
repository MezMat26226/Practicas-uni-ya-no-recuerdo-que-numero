#include<stdio.h>
#include<string.h>
#define N 5
#define M 20
int main()
{
	char LISTA[N][M], AUX[M];
	int NOTA[M], I,J,NOTAUX;
	printf("Ingrese los datos de los 10 alumnos: ");
	/*INGRESO*/
	for(I=0;I<N;I++){
		printf("\nAlumno numero %d: ",I+1);
		fflush(stdin);
		gets(LISTA[I]);
		printf("Nota : ");
		scanf("%d",&NOTA[I]);
	}
	/*ORDENAMIENTO*/
	for(I=0;I<N;I++){
		for(J=I;J<N;J++){
			if(NOTA[I]>NOTA[J]){
				NOTAUX = NOTA[I];
				NOTA[I] = NOTA[J];
				NOTA [J] = NOTAUX;
				/*ARRASTRE*/
				strcpy(AUX,LISTA[I]);
				strcpy(LISTA[I],LISTA[J]);
				strcpy(LISTA[J],AUX);
			}
		}
	}
	/*IMPRESION*/
	for(I=0;I<N;I++){
		printf("\n%30s%10d",LISTA[I],NOTA[I]);
	}
}
