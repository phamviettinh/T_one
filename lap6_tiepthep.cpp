#include<stdio.h>
#include<math.h>
#include<string.h>

typedef struct danh_sach
{
	char ma_sach[10];
	char ten_sach[30];
	char ten_tac_gia[30];
	char loai_sach;//2 loai 1=tu nhien,2=xa hoi
	int nam_sx;
	float gia_tien;
	int so_luong;
}DS;
// nhap so luong sach
void nhapSl(int &n)
{
	do{
		printf("nhap so luong sach trong danh sach: ");
		scanf("%d",&n);
	}while(n<=0);
}
//nhap thong tin cho sach
void nhap_thong_tin(DS &x)
{
	printf("\nnhap ma sach: ");
	scanf("%d",&x.ma_sach);
	printf("nhap ten sach: ");
	fflush(stdin);gets(x.ten_sach);
	printf("\nnhap ten tac gia: ");
	rewind(stdin);gets(x.ten_tac_gia);
	printf("\nnhap loai sach: ");
	scanf("%d",&x.loai_sach);
	printf("\nnhap nam san xuat: ");
	scanf("%d",&x.nam_sx);
	printf("\nnhap gia tien sach: ");
	scanf("%f",&x.gia_tien);
	printf("\nnhap so luong sach: ");
	scanf("%d",&x.so_luong);
}
//xuat so luong
void xuat_thong_tin(DS x)
{
	printf("\nma sach: %s",x.ma_sach);
	printf("\nten sach: %s",x.ten_sach);
	printf("\nten tac gia: %s",x.ten_tac_gia);
	printf("\nloai sach: %c",x.loai_sach);
	printf("\nnam san xuat: %d",x.nam_sx);
	printf("\ngia tien sach: %f",x.gia_tien);
	printf("\nso luong sach: %d",x.gia_tien);
	
}
//for loop nhap thong tin
void input(DS a[],int n)
{
	for(int i=0;i<n;i++)
	{
		nhap_thong_tin(a[i]);
	}
}
//for loop xuat thong tin
void output(DS a[],int n)
{
	for(int i=0;i<n;i++)
	{
		xuat_thong_tin(a[i]);
	}
}
//them mo cuon sach

//tinh tong tien ca cuon sach
float tinh_tien(DS a[],int n)
{
	float sum=0;
	for(int i=0;i<n;i++)
	{
		sum +=a[i].gia_tien*a[i].so_luong;
	}
	return sum;
}
//
//tim sach theo ten
int tim(DS a[],int n)
{
	char sach_tim[30];
	printf("nhap ten sach muon tim: ");
	scanf("%s",sach_tim);
	for(int i=0;i<n;i++)
	{
		if(a[i].ten_sach=sach_tim)
			return i;
	}
	
}

//ham chinh
int main()
{
	int n,k;
	DS a[100];
	nhapSl(n);
	input(a,n);
	//output(a,n);
	//printf("\ntong tien cua cac cuon sach: %.1f",tinh_tien(a,n));
	
	
	tim(a,n);
	
}









