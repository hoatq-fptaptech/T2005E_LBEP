#include <stdio.h>

int main(){
	int ary[5];
	ary[0] = 10;
	
	ary[4] = 3;
	int x =5;
	for(int i=0;i<5;i++){
		printf("nhap pt:\n");
		scanf("%d",&ary[i]);
	}
	printf("mang sau khi nhap:\n");
	for(int i=0;i<5;i++){
		printf("%d\t",ary[i]);
	}
	
	
}
