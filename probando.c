#include<stdio.h>
 int main(){
 	int cod[10], ven[10], pre[10];
 	int i,j=0,k=0;
 	for(i=0;(i<10)&&(j!=-1);i++){
 		printf("Ingrese el precio unitario del producto %d: ",i+1);
 		scanf("%d",&pre[i]);
 		printf("Cuantas unidades se vendieron de ese producto?: ");
 		scanf("%d",&ven[i]);
 		printf("Ingrese el codigo del producto %d: ",i+1);
 		scanf("%d",&cod[i]);
 		if(cod[i]>0){
 			k += 1;
		 }
 		else if(cod[i]==0){
 			j = -1;
		 }
	 }
	 for(i=0;i<=k;i++){
	 	printf("Producto %d) Codigo: %d. \tUnidades vendidas: %d. \tPrecio unitario: $%d.\n",i+1,cod[i],ven[i],pre[i]);
	 }
}
