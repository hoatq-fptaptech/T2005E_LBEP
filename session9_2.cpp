#include <stdio.h>

void nhapMang(int ary[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d: \n",i);
		scanf("%d",&ary[i]);
	}
}
void nhapMangLoai2(int *p,int n){
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d: \n",i);
		scanf("%d",p+i);
	}
}
void inMang(int ary[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",ary[i]);
	}
}
void sortArray(int ary,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(ary[j]> ary[j+1]){
				int tmp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = tmp;
			}
		}
	}
}
int main(){
	int ary[10];
	int ary2[5];
	nhapMang(ary,10);
	nhapMangLoai2(ary2,5);
	sortArray(ary,10);
	sortArray(ary2,5);
	inMang(ary,10);
	printf("\n");
	inMang(ary2,5);
	return 0;
}
