#include<stdio.h>
#include<string.h>
//struct kieu sinh vien
typedef struct sinh_vien
{
	char ms[10];
	char hoten[31];
	char gt;
	char lop[8];
	float dtb;
}SV;
//nhap so luong sinh vien
void nhapsl(int &n)
{
	do
	{
		printf("nhap so luong sinh vien: ");
		scanf("%d",&n);
	}
	while(n<0);
}
//nhap sinh vien
void input(SV &x)
{
	printf("\nnhap ma so sinh vien: ");
	scanf("%s",&x.ms);
	printf("\nnhap ho ten sinh vien: ");rewind(stdin);gets(x.hoten);
	printf("\nnhap gioi tinh sinh vien: ");//x=> nu;y =>y;
	scanf("%c",&x.gt);
	printf("\nnhap ma lop sinh vien: ");
	scanf("%s",&x.lop);
	printf("\nnhap diem trung binh cua hoc sinh: ");
	scanf("%f",&x.dtb);
}
//xuat 1 sinh vien
void output(SV &x)
{
	printf("\nma so sinh vien: %s",x.ms);
	printf("\nho ten sinh vien: %s",x.hoten);
	printf("\ngioi tinh sinh vien: %c",x.gt);
	printf("\nma lop sinh vien: %s",x.lop);
	printf("\ndiem trung binh cua hoc sinh: %.2f",x.dtb);
	
}
//nhap sinh vien
void nhap1sv (SV a[],int n )
{
	for(int i=0;i<n;i++)
	{
		printf("\nstt %d",i+1);
		input(a[i]);
	}
}
//tim sinh vien co diem trung binh lon hon 5
void tim_dtb(SV a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i].dtb>5)
		output(a[i]);
	}
}
//in ra danh scah cac sinh vien thuoc nghanh cong nghe thong tin
void tim_sv_cntt(SV a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(strstr(a[i].lop,"TH"))
		{
			output(a[i]);
		}
	}
}
//dem so luong sinh vien nu
int dem(SV a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].gt =='X')
		{
			dem++;
		}
	}return dem;
}
//tim sinh vien co diem trung binh cao nhat
int dtb_lon_nhat(SV a[],int n)
{
	float sum=a[0].dtb;
	for(int i=0;i<n;i++)
	{
		if(a[i].dtb>sum)
		{
			sum=a[i].dtb;
		}
	}
	return sum;
}
//xuat cac sinh vien co diem trung binh cao nhat
void xuat_dtb_cao_nhat(SV a[],int n)
{
	float max=dtb_lon_nhat(a,n);
	for(int i=0;i<n;i++)
	{
		if(a[i].dtb==max)
		{
			output(a[i]);
		}
	}
	
}
//xuat cac sinh vien khong phai nganh cong nghe thoong tin
void khong_cntt(SV a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i].gt =='Y')
		{
			if(strstr(a[i].lop,"TH")!=0)
			output(a[i]);
		}
	}
}
//xuat sinh vien theo vi tri cua k
void nhap_k( SV a[],int k,char n)//k la vi tri sinh vien
{
	printf("nhap vi tri can tim: ");
	scanf("%s",k);
	for(int i=0;i<n;i++)
	{
		if(a[i].ms=="k") 
		{
			output(a[i]);
		}
	}
	
}
//xoa ma so sinh vien tuong ung
void xoa_mssv( SV a[],int x,char n)//x la ma so sinh vien
{
	printf("nhap vi tri can tim: ");
	scanf("%s",x);
	for(int i=0;i<n;i++)
	{
		if(a[i].ms=="x") 
		{
			a[i]
		}
	}

////ham chinh
int main()
{
	SV a[100];
	int n,k;
	nhapsl(n);
	nhap1sv(a,n);
}
