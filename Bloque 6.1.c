#include<stdio.h>
#include<string.h>
typedef struct{
	int paginas;
	char nombre[50];
	float precio;
}libro;

int main(){
	int i;
	libro JS[10];
	for(i=0;i<10;i++){
		JS[i].precio = 25 + i;
		printf("%i = %f.\n",i+1,JS[i].precio);
	}
	return 0;
}
