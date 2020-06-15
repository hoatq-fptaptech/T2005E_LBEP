#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu:\n");
		scanf("%d",&ary[i]);
	}
	int max = 0;
	for(int i=0;i<n;i++){
		if(ary[i] %2 !=0){
			max = ary[i];
			break;
		}
	}
	if(max %2==0){
		printf("Mang nay ko co so le!");
	}else{
		for(int i=0;i<n;i++){
			if(ary[i]> max && ary[i] %2 !=0){
				max = ary[i];
			}
		}
		printf("So le lon nhat:%d\n",max);
	}
}
