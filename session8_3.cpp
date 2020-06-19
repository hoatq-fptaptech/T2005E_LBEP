#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p;
//	p = (int *)malloc(5*sizeof(int));
	p= (int *)calloc(5,sizeof(int));
	for(int i=0;i<5;i++){
		printf("Nhap pt thu %d",i);
		scanf("%d",p+i);
	}
	printf("In mang:\n");
	for(int i=0;i<5;i++){
		printf("%d\t",*(p+i));
	}
	p = (int *)realloc(p,10*sizeof(int));
	for(int i=5;i<10;i++){
		printf("\nNhap pt thu %d",i);
		scanf("%d",p+i);
	} 
	printf("\nIn mang:\n");
	for(int i=0;i<10;i++){
		printf("%d\t",*(p+i));
	}
	free(p);
}
