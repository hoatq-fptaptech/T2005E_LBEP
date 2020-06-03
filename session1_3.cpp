#include <stdio.h>

int main(){
	int num;
	printf("nhap so can kiem tra chan hay le:\n");
	scanf("%d",&num);
	int r = num%2;
	if(r==0){
		printf("%d la so chan",num);
	}else{
		printf("%d la so le",num);
	}
}
