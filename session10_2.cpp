#include <stdio.h>
#include <stdlib.h>
typedef struct GiaoVien{
	char tenGV[50];
	char diaChi[200];
	char tel[20];
}GiaoVien;

typedef struct SinhVien{
	int MSSV;
	char tenSV[50];
	char tel[20];
	char email[50];
}SinhVien;

typedef struct LopHoc{
	char tenLop[50];
	char phongHoc[20];
	GiaoVien gv;
	SinhVien sv[28];
}LopHoc;

int main(){
//	LopHoc t2005e;
//	printf("nhap thong tin lop hoc:\n");
//	printf("Ten lop:\n");
//	scanf("%s",t2005e.tenLop);
//	printf("Phong hoc:\n");
//	scanf("%s",t2005e.phongHoc);
//	printf("Nhap ten giao vien:\n");
//	scanf("%s",t2005e.gv.tenGV);
//	printf("Nhap dia chi giao vien:\n");
//	scanf("%s",t2005e.gv.diaChi);
//	printf("Nhap SDT giao vien:\n");
//	scanf("%s",t2005e.gv.tel);
//	for(int i=0;i<28;i++){
//		printf("Thong tin sinh vien thu %d:\n",i+1);
//		printf("Nhap MSSV:\n");
//		scanf("%d",&t2005e.sv[i].MSSV);
//		printf("Nhap ten:\n");
//		scanf("%s",t2005e.sv[i].tenSV);
//		printf("Nhap SDT:\n");
//		scanf("%s",t2005e.sv[i].tel);
//		printf("Nhap email:\n");
//		scanf("%s",t2005e.sv[i].email);
//	}
//	
	SinhVien *svtudo;
	svtudo = (SinhVien *)malloc(5*sizeof(SinhVien));
	for(int i=0;i<2;i++){
		printf("Nhap sinh vien tu do thu %d\n",i+1);
		printf("MSSV:\n");
		scanf("%d",&((svtudo+i)->MSSV));
		printf("Ten SV:\n");
		scanf("%s",(svtudo+i)->tenSV);
	}
	
	printf("sau khi nhap xong:\n");
	
	for(int i=0;i<2;i++){
		printf("ten sv: %s\n",(svtudo+i)->tenSV);
		printf("MSSV: %d\n",(svtudo+i)->MSSV);
	}
	
	LopHoc *lh;
	lh = (LopHoc *)malloc(2*sizeof(LopHoc));
	
	for(int i=0;i<2;i++){
		printf("Ten giao vien\n");
		scanf("%s",((lh+i)->gv).tenGV);
		for(int j=0;j<28;j++){
			printf("Nhap ten sv:\n");
			scanf("%s",(((lh+i)->sv) +j)->tenSV);
		}
	}
	
	return 0;
	
}
