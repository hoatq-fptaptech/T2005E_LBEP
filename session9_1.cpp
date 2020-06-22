#include <stdio.h>

int tinhTong(int x,int y){
	int c = x+y;
	return c;
}
bool kiemTraSoLe(int n){
	if(n%2 ==0){
		return false;
	}
	return true;
}
void menu(){
	printf("Menu:\n");
	printf("1. Com rang\n");
	printf("2. Pho bo\n");
	printf("3. Pho ga\n");
	int k = tinhTong(4,5);
}
bool kiemTraSNT(int x){
	if(x<2) return false;
	if(x==2) return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0) 
			return false;
	}
	return true;
}
int main(){
	int x = tinhTong(100,200);
	printf("x= %d\n",x);
	int y= tinhTong(x+22,15);
	printf("y= %d\n",y);  
	menu();
	if(kiemTraSoLe(5)){
		printf("Day la so le");
	}
	return 0;	
}
