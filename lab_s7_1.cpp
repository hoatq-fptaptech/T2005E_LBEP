#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int max = 0;
	if(n<0) n = -n;
	while(n!=0){
		int sd = n%10;
		if(sd > max) 
			max = sd;
		n/=10;	
	}
	printf("Chu so lon nhat: %d",max);
}
