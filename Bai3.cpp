#include<stdio.h>
#define max 100
//next to===>
//nhapo so luongphan tu co trong mang
void input(int &d,int &c)
{
	printf("nhap du lieu cho dong: ");scanf("%d",&d);
	printf("nhap du lieu cho cot: ");scanf("%d",&c);
}
//nhap phan tu cho mang
void inputit(int a[][100],int d,int c)
{
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d", &a[i][j]);
		}
	}
}
//xuat ra mang vua nhap
void output (int a[][100], int d, int c)
{
	printf ("Ma tran ban vua nhap: \n");
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
		printf ("\t%d", a[i][j] );
		}
		printf ("\n");
	}
}
//tinh tong cac phan tu cua ma tran a
int SUM(int a[][100],int d,int c)
{
	int sum=0;
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			sum=sum+a[i][j];
		}
	}
	return sum;
}
//tinh trung binh cong
float TBC (int a[][100],int d,int c)
{
	float tbc= SUM(a,d,c)*0.1/(d*c);
	return tbc;
}

//
int main()
{
	int d,c;
	int a[100][100];
	input(d,c);
	inputit(a,d,c);
	output(a,d,c);
	printf("tong cua ma tran a:%d",SUM(a,d,c));
	printf("\ntrung binh cong cua ma tran: %.3f",TBC(a,d,c));
	return 0;
}
	
