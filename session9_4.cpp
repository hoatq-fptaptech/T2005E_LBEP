#include <stdio.h>
#include <string.h>

int main(){
	char s1[200],s2[100];
//	for(int i=0;i<20;i++){
//		scanf("%c",&s[i]);
//	}
	printf("nhap chuoi:\n");
	scanf("%s",s1);
	printf("nhap chuoi 2:\n");
	scanf("%s",s2);
//	strcat(s1,s2);
//	strcat(s2,s1);
	printf("Chuoi vua nhap xong: %s\n",s1);
	printf("Chuoi vua nhap xong: %s\n",s2);
	printf("ket qua so sanh s1 vs s2: %d",strcmp(s1,s2));
	char chr = 'l';
	printf("vi tri cua e trong s1: %u\n",strchr(s1,chr)-s1);
	strcpy(s1,s2);
	printf("Chuoi vua nhap xong: %s\n",s1);
	printf("Chuoi vua nhap xong: %s\n",s2);
	printf("do dai chuoi s1: %u",strlen(s1));
	return 0;
}
