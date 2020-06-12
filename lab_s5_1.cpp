#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	printf("nhap a=\n");
	scanf("%d",&a);
	printf("nhap b=\n");
	scanf("%d",&b);
	int UCLN = 1;
	for(int i=2;i<=abs(a)&& i<=abs(b);i++){
		if(a%i==0 && b%i==0){
			UCLN = i;
		}
	}
	printf("UCLN: %d",UCLN);
}
