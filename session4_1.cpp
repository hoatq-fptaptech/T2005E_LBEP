#include <stdio.h>

int main(){
	float S=0;
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		S += (float)1/i;
	}
	printf("S= %f\n",S);
}
