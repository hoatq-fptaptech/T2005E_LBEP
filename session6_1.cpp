#include <stdio.h>

int main(){
	int ary[10];
	for(int i=0;i<10;i++){
		printf("nhap pt:\n");
		scanf("%d",&ary[i]);
	}
	int max = ary[0];
	for(int i=0;i<10;i++){
		if(ary[i]> max){
			max = ary[i];
		}
	}
	printf("Max: %d",max);
 
}
