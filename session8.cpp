#include <stdio.h>
#include <iostream>
int main(){
	int x = 10;
	int *p;
	printf("Gia tri cua x:\n");
	std::cout << x;
	printf("\ndia chi nha cua x: \n");
	std::cout << &x;
	p= &x;
	printf("\n Gia tri cua p:\n");
	std::cout << p;
	printf("\n Dia chi cua p:\n");
	std::cout << &p;
	x = x-5;
	*(p) = *(p)-5;
	printf("\nGia tri cua x:\n");
	std::cout << x;
}
