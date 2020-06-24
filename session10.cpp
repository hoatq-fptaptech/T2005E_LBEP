#include <stdio.h>
#include <string.h>
typedef struct GirlFriend{
	char gName[50];
	char tel[20];
}GirlFriend;
typedef struct SinhVien{
	int MSSV;
	char tenSV[50];
	float diemThi;
	GirlFriend gf;
}SinhVien;

int main(){
	struct SinhVien sv1;
	sv1.MSSV = 12;
	printf("Nhap ten sv1:\n");
	scanf("%s",sv1.tenSV);
	printf("nhap diem cho sv1:\n");
	scanf("%f",&sv1.diemThi);
	printf("Thong tin sinh vien vua nhap:\n");
	printf("%d - %s - %0.1f",sv1.MSSV,sv1.tenSV,sv1.diemThi);
	
	struct SinhVien t2005e[28];
	SinhVien sv2;
	GirlFriend g1;
	strcpy(g1.gName,"LeThiNa");
	strcpy(g1.tel,"0988888888");
	memcpy(&sv2.gf,&g1,sizeof(GirlFriend));
	printf("Ten cua ban gai sv2: %s",sv2.gf.gName);
}
