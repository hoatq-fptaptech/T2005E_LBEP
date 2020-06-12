#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	if(n<0){
		printf("Khong nhap dung gia tri");
	}else if(n==0){
		printf("la so 0");
	}else if(n == 1){
		printf("la so 1");
	}else if(n==2){
		printf("la so 2");
	}else{
		int x1=1,x2=1,x3=2;
		for( ;x2+x3<=n; ){
			x1=x2;
			x2=x3;
			x3= x1+x2;
		}
		printf("so tiem can %d trong day fibonaci la %d\n",n,x3);
	}
	
}
