#include <stdio.h>

int main(){
	float S=0;
	int n,i=1;
	printf("Nhap n=\n");
	scanf("%d",&n);
	while(i<=n){
		S += (float)1/i;
		i++;
	}
	printf("S= %f\n",S);
}
