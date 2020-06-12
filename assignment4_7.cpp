#include <stdio.h>

int main(){
	int n,S=0,count=0;
	do{
		printf("nhap 1 so > 1000:\n");
		scanf("%d",&n);
		count++;
		S+=n;
	}while(n<=1000);
	printf("Nguoi dung phai nhap %d lan moi thanh cong\n",count);
	printf("Gia tri trung binh qua nhung lan nhap: %f",(float)S/count);
}
