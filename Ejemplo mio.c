#include<stdio.h>
#include<string.h>
struct alumno{
	int nota;
	char nombre[40];
	int edad;
};
int main(){
	struct alumno a1;
	a1.nota = 4;
	printf("La nota es: %i",a1.nota);
	return 0;
}
