#include <stdio.h>

int main(){
	int S=0;
	for(int i=0,count=0;count<100;i++){
		if(i%2!=0){
			S+=i;
			count++;
		}
	}
	printf("S=%d\n",S);
}
