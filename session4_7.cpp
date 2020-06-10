#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	if(n<2){
		printf("%d khong phai SNT",n);
	}else if(n==2){
		printf("%d la SNT",n);
	}else{
		int count = 0;
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				count++;
				break;
			}
		}
		if(count > 0){
			printf("%d khong phai SNT",n);
		}else{
			printf("%d la SNT",n);
		}
	}	
}
