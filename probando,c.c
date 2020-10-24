#include<stdio.h>
 int main(){
 	int cont=0,i=0,v[20];
 	do{
	 printf("1 al 9 para una nueva venta: ");
	 scanf("%d",&v[i]);	
	 if(v[i]>0){
	 	cont += 1;
	 }
	 }while(v[i]!=0);
	 for(i=0;i<cont;i++){
	 	printf("%d.\n",v[i]);
	 }
 }
