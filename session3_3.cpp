#include <stdio.h>

int main(){
	int n;
	printf("Nhap lua chon: \n");
	scanf("%d",&n);
	
	switch(n){
		case 1: printf("Ban chon cafe");break;
		case 2: printf("Ban chon tra sua");break;
		case 3: printf("khong chon gi ca");break;
		default:printf("Chon lai danh muc");
	}
	
	if(n == 1){
		printf("Ban chon cafe");
	}else if(n==2){
		printf("Ban chon tra sua");
	}else if(n == 3){
		printf("khong chon gi ca");
	}else{
		printf("Chon lai danh muc");
	}
	char h;
	printf("nhap ky tu lua chon:\n");
	scanf("%c",&h);
	
	switch(h){
		case 'y': printf("Ban chon tiep tuc cai dat");break;
		case 'n': printf("thoat cai dat");break;
	}
	
}
