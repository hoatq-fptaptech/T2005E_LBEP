#include <stdio.h>

int main(){
	int x = 11,y;
	y = (float)x/2;
	float z;
	z = (float)x/2;
	printf("y = %d\n",y);
	printf("z = %f",z);
	char h = 'X';
	putchar(h);// printf("%c",h);
	printf("nhap ky tu:\n");
	h = getchar();// scanf("%c",&h);
}
