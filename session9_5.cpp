#include <stdio.h>
#include <string.h>

int main(){
	char s[50];
	printf("nhap chuoi\n");
	scanf("%s",s);
	printf("Chuoi vua nhap %s\n",s);
	for(int i=0;i<=strlen(s)/2;i++){
		char tmp = s[i];
		s[i] = s[strlen(s)-i-1];
		s[strlen(s)-i-1] = tmp;
	}
	printf("Chuoi vua nhap %s\n",s);
}
