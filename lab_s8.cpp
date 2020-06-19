#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,*p;
	printf("Nhap n=\n");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d:\n",i);
		scanf("%d",p+i);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(*(p+j) > *(p+j+1)){
				int tmp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = tmp;
			}
		}
	}
	printf("sau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",*(p+i));
	}
	int m;
	printf("So luong muon them:\n");
	scanf("%d",&m);
	p = (int *)realloc(p,(m+n)*sizeof(int));
	for(int i=n;i<n+m;i++){
		printf("nhap pt thu %d:\n",i);
		scanf("%d",p+i);
	}
	for(int i=0;i<n+m-1;i++){
		for(int j=0;j<n+m-i-1;j++){
			if(*(p+j) > *(p+j+1)){
				int tmp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = tmp;
			}
		}
	}
	printf("\nsau khi sap xep:\n");
	for(int i=0;i<n+m;i++){
		printf("%d\t",*(p+i));
	}
	free(p);
}
