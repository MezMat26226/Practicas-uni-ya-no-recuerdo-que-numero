#include<stdio.h>
int main()
{
	int i;
	int vec[5];
	for(i=0;i<5;i++){
		printf("VEC[%d]: ",i+1);
		scanf("%d",&vec[i]);
	}
	for(i=0;i<5;i++){
		printf("\n%d",vec[i]);
	}
	return 0;
}
