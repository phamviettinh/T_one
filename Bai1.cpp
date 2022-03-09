#include<stdio.h>
#define MAX 100
///Pham Viet Tinh-21051799
///menu
/*void menu(int n)
{
	printf("1.nhap so luong phan tu");
	printf("2.nhap phan tu cho mang");
	printf("3.xuat phan tu trong mang");
	printf("3.in ra phan tu chia het cho 3");
	printf("4.in ra so nguyen to trong mang");
	printf("5.dem so luong so nguyen to co trong mang");
	printf("6.tinh tong cac so trong mang");
	printf("7.tinh tong trung binh cong ca so trong mang");
	printf("8.tinh tong trung binh cong cac so nguyen to co trong mang");
	printf("chon ham:");scanf("%d",&n);
	switch(n)
}
*/
///nhap so luong phan tu
void inputN(int &n)
{
	do{
		printf("nhap so duong lon hon 0: \n");
		scanf("%d",&n);
	}
	while(n<=0||n>100);
	
}

///nhap phan tu cho mang
void inputitem(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
///xuat phan tu trong mang
int output(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%4d",a[i]);
}
///in ra phan tu chia het cho 3
void chia3(int a[],int n)
{
	printf("\nnhung so chia het cho 3: ");
	for(int i=0;i<n;i++)
	{

		if(a[i]%3==0)
		{
		printf("%4d",a[i]);
		}
	
	}
}
///kiem tra nguyen to
int ktnt(int n)
{
	if(n<2)
		return 0;
	else
		{
			for(int i=2;i<=n/2;i++)
				if(n%i==0)
					return 0;
			return 1;
		}
}
///in ra so nguyen to trong mang
void insonguyento(int a[],int n)
{
	printf("\ncac so nguyen co trong mang: ");
	for(int i=0;i<n;i++)
	{
		if(ktnt (a[i]))
		printf("%4d",a[i]);
	}
		
}
///dem so luong so nguyen to co trong mang
int dslnguyento(int a[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(ktnt(a[i])==1)
			s++;
	}
	return s;
}
///tinh tong cac so trong mang
int tinhtong(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(ktnt(a[i])==1)
			sum+=a[i];
	}
	return sum;
	
}
///tinh tong trung binh cong
float tbc(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	float tb=sum/n;
	return tb;
}
///tinh tong trung binh cong cac so nguyen to co trong mang
int tbcsnt(int a[],int n)
{
int sum=0;
for(int i=0;i<n;i++)
	{
	if(ktnt(a[i]))
	sum+=a[i];
	}
int tbc=sum/n;
return tbc;
}
///tim phan tu duong dau tien
int duongdt(int a[],int n)
{

	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
			return a[i];
	}
}
///tim phan tu nguyen cuoi cung
int duongcc(int a[],int n)
{
	for(int i=n-1;i<0;i--)
	{
		if(a[i]>0)
			return a[i];
	}
}
///tim gia tri phan tu lon nhat
int NumberMax(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	return max;
}
///tim gia tri phan tu nho nhat
int NumberMin(int a[],int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	return min;
}
///dem so phan tu lon nhat
int slmax(int a[],int n)
{
	int d=0;
	int max=NumberMax(a,n);
	for(int i=0;i<n;i++)
	{
		if(max==a[i]);
		d++;
	}
	return d;
}
///xuat ra cac gia tri cua cac phan tu lon nhat
int vtMax(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
			max=i;
	}
	return max;
}
///the mot phan tu moi vao mang
void thempt(int a[],int &n,int x,int k)
{
	for(int i=0;i<n;i++)
	{
		a[i]=a[i-1];
		a[k]=x;
		n++;
	}
		
}
/////////////////////////////
int main()
{
	int d, n,a[MAX];
	inputN(n);
	inputitem(a,n);
	output(a,n);
	chia3(a,n);
	ktnt(n);
	insonguyento(a,n);
	printf("\nso luong phan tu nguyen to co trong mang: %d", dslnguyento(a,n));
	printf("\ntong nguyen to co trong mang : %d ",tinhtong(a,n));
	printf("\ntrung binh cong cua mang la: %.4f",tbc(a,n));
	printf("\ntrung binh cong cac so nguyen to co trong mang la: %d",tbcsnt(a,n));
	printf("\nphan tu duong dau tien cua mang la: %d",duongdt(a,n));
	printf("\nphan tu duong cuoi cung cua mang la: %d",duongcc(a,n));
	printf("\nphan tu lon nhat cua mang la: %d",NumberMax(a,n));
	printf("\nphan tu nho nhat cua mang la: %d",NumberMin(a,n));
	printf("\nso luong phan tu lon nhat trong mang: %d",slmax(a,n));
	printf("\nvi tri cua so lon nhat: %d",vtMax(a,n));
	int x,k;
	printf("\nnhap phan tu them:");
	scanf(" %d",&x);
	printf("vi tri muon them:");
	scanf("%d",&k);
	thempt(a,n,x,k);
	printf("\nmang sau khi them:",output(a,n));
	
	return 0;
	
}
