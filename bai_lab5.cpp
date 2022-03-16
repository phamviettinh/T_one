#include<stdio.h>
#include<math.h>
//co gi dau ma coi....nhi nhin?
typedef struct phanso
{
	int tu;
	int mau;
}PS;

//nhap mau va tu
void input(PS &x)
{
	printf("nhap tu: "); scanf("%d",&x.tu);
	do
	{
		printf("nhap mau khac 0: ");
		scanf("%d",&x.mau);
		if(x.mau==0)
		{
			printf("mau so phai khac khong!\n");
		}
	}
	while(x.mau==0);
	if(x.mau<0)
	{
		x.tu=-x.tu;x.mau=-x.mau;
	}
}
//xuat ra mot phan so                         
int output(PS x)
{
	printf("phan so vua nhap %d/%d\n",x.tu,x.mau);
}
//tim ucln
int ucln(int a, int b)
{
	a=abs(a);b=abs(b);
	while(a!=b)
	{
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
//rut gon phan so
void rutgon(PS &x)
{
	if(x.tu==0) return ;
	int u=ucln(x.tu,x.mau);
	x.tu/=u;
	x.mau/=u;
}
//tinh tong 2 phan so
float tong(PS x1, PS x2)
{
	int Tu2, Mau2;
	Tu2 = x1.tu*x2.mau + x1.mau*x2.tu;
	Mau2 = x1.mau*x2.mau;
	return (float)Tu2/Mau2;
}

///
int main()
{

	PS x,y;
	input(x);
	rutgon(x);
	output(x);
	printf("tong cua hai phan so: %d",tong(x,y));
	
	return 0;
	
}
