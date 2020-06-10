#include <stdio.h>

int main(){
	int a,b,c;
	do{
		printf("nhap 3 canh tam giac\n");
		printf("Canh thu nhat:\n");
		scanf("%d",&a);
		printf("Canh thu 2:\n");
		scanf("%d",&b);
		printf("Canh thu 3:\n");
		scanf("%d",&c);
	}while(!(a+b>c && a+c>b && b+c>a&& a>0 && b>0 && c>0));
	// ra day duoc 3 canh tam giac
}
