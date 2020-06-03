#include <stdio.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	if(n>0){
		printf("%d la so duong\n",n);
	}else{
		if(n==0){
			printf("%d la so 0",n);
		}else{
			printf("%d la so am",n);
		}
	}
}
