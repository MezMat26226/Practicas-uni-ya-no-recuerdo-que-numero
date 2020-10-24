/*Estructuras*/
#include<stdio.h>
int main()
{
	struct ESTRU{
		int A;
		char B[10];
		float C;
	}VAR1,VAR2;
	printf("Ingrese un numero entero: ");scanf("%d",&VAR1.A);
	fflush(stdin);
	printf("Ingrese un nombre: ");
	gets(VAR1.B);
	printf("Ingrese un numero con decimales: ");scanf("%f",&VAR1.C);
	printf("\n\nValores ingresados");
	printf("\nEntero: %d\nChar: %d\nFlotante: %f\n\n",VAR1.A,VAR1.B,VAR1.C);
}
