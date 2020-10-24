#include<stdio.h>
int main()
{
	int I=1, MAT[10];
	while(MAT[I]!=0){
		printf("Ingrese un numero: ");
		fflush(stdin);
		scanf("%d",&MAT[I]);
	}
	for(I=0;I<10;I++){
		printf("%d\n",MAT[I]);
	}
}
