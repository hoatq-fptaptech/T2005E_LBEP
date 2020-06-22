#include <stdio.h>
#include <stdlib.h>
void nhapMatran(int ary[][3],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			printf("Nhap pt [%d][%d]:\n",i,j);
			scanf("%d",&ary[i][j]);
		}
	}
}
void inMatran(int ary[][3],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",ary[i][j]);
		}
		printf("\n");
	}
}
void nhapMatran2(int *ary,int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap pt [%d][%d]:\n",i,j);
			scanf("%d",ary+i*n+j);
		}
	}
}
void inMatran2(int *ary,int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",*(ary+i*n+j));
		}
		printf("\n");
	}
}
int main(){
//	int mt[4][3];	
//	nhapMatran(mt,4);	
//	inMatran(mt,4);
	int *mt2;
	mt2 = (int *)calloc(4*3,sizeof(int));
	inMatran2(mt2,4,3);
	return 0;
}
