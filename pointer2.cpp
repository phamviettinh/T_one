#include<stdio.h>
#include<string.h>

typedef struct ve_xem_phim
{
	char ma_ghe[10];
	char ten_phim[30];
	int loai_phim;//1 2 3 : kinh dị/hành động/tình cảm
	char ma_phong_chieu[10];
	float gia_tien;
	
}VP;
// nhập sô lượng
void nhapN(int &n)
{
	do{
		printf("nhap N: "); scanf("%d",&n);
	}while(n<0);
}
//nhập thông tin 1 vé xem phim
void nhap_thong_tin(int n,VP x)
{
	printf("nhap ma ghe: ");
	scanf("%s",&x.ma_ghe);
	printf("nhap ten phim: ");
	scanf("%s",&x.ten_phim);
	printf("nhap loai phim: ");
	scanf("%d",&x.loai_phim);
	printf("nhap phong chieu: ");
	scanf("%s",&x.ma_phong_chieu);
	printf("%f",&x.gia_tien);
}
//xuất thông tin
void xuat_thong_tin(int n,VP x)
{
	printf("\nma ghe: %s",x.ma_ghe);
	printf("\nten phim %s",x.ten_phim);
	printf("\nloai phim: %d",x.loai_phim);
	printf("\nphong chieu phim: %s",x.ma_phong_chieu);
	printf("\ngia tien ve: %f",x.gia_tien);
}
// nhập thông tin cho một vé
void input(int n, int* a)
{
	for(int i=0;i<n;i++)
	{
		nhap_thong_tin(*(a+i));
	}
}


int main()
{
	int n,int* a,int arr[100];
	
	
}
