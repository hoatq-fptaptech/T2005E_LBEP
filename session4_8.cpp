#include <stdio.h>

int main(){
	for(int i=0;i<10;i++){
		printf("phan 1 cua vong - %d\n",i);
		if(i==4){
//			break;
			continue;
		}
		printf("Phan 2 cua vong - %d\n",i);
	}
}
