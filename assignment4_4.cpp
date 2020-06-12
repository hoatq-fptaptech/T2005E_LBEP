#include <stdio.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int S=0;
	printf("danh sach cac uoc cua %d la:\n",n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%5d",i);
			S+=i;
		}
	}
	printf("\nTong cac uoc: %d",S);
}
