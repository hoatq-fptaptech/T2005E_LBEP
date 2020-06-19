#include <stdio.h>

int main(){
	int ary[5] = {1,5,2,4,3};
	for(int i=0;i<5;i++){
		printf("%d\t",ary[i]);
	}
	printf("%d",ary[0]);
	printf("%d",*(ary+0));
	printf("%d",*(ary+4));
	for(int i=0;i<5;i++){
		printf("%d\t",*(ary+i));
	}
}
