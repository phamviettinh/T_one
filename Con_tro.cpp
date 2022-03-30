#include<stdio.h>
#include<math.h>

void nhapN(int &n)
{
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while(n<0);
}
//cho số phần tử của dãy số
void nhap_day_so(int n,int* a)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&*(a+i));
	}
}
//xuất giá trị
void xuat_day_so(int n,int* a)
{
	for(int i=0;i<n;i++)
	{
		printf("%4d",*(a+i));
	}
}
//tìm ra só nguyên tố
int tim_nt(int n)
{
	if (n == 1 || n == 2) {
		return true;
	}
	
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return false;	
		}
	}
	
	return true;
}

//in ra các vị trí lẻ
void in_le(int n,int* a)
{
	for(int i=0;i<n;i++)
	{
		int b=*(a+i);
		if(i%2!=0)
		{
			if(tim_nt(b))
			{
				printf("%2d",b);
			}
		}
		
	}
}
//tìm số lớn nhất 
int tim_max(int n,int* a)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		int b=*(a+i);
		if(b>max)
		{
			max=b;
		}
	}
	return max;
}
//xuất các phần tử có giá trị lớn nhất
void input_max(int n,int* a)
{
	int max=tim_max(n,a);
	for(int i=0;i<n;i++)
	{
		int b=*(a+i);
		if(*(a+i)==max)
		{
			printf("%d\t",b);
		}
	}
}
//tìm giá trị x
void tim_x(int n,int* a,int x)
{
	for(int i=0;i<n;i++)
	{
		int b=*(a+i);
		if(b==x)
		{
			printf("\nso x ban tim: %d",b);
		}
	}
}
//tính tổng các phần tử nằm ở vị trí chẵn trong mảng
int tinh_tong(int n,int* a)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			sum+=*(a+i);
		}
	}
	return sum;
}

//hàm chính
int main()
{
	int Arr[100],n;
	int* a=Arr;
	nhapN(n);
	nhap_day_so(n,a);
	printf("day so vua nhap: ");
	xuat_day_so(n,a);
	printf("\nnhung so nguyen to nam trong vi tri le: ");
	in_le(n,a);
	printf("\nnhung so lon nhat trong danh sach: ");
	input_max(n,a);
	int x;
	printf("\nnhap so x: "); scanf("%d",&x);tim_x(n,a,x);
	printf("\ntong cac phan tu vi tri chan: %d",tinh_tong(n,a));

	

}
//	int a[10];
//	
//	int* pointer = a;
//	//printf("%d", *(pointer+2));
//	scanf("%d",&*pointer);
//	
//	printf("%d\n",*pointer);
//	
//	scanf("%d",&*(pointer+1));
//	printf("%d",*(pointer+1));
	
	
	
	
	//int* pointer2 = &pointer;//địa chỉ con chỏ thứ 1
	
//	int* pointer3= pointer;
//	printf("%d",*pointer3);
//	











	

//{
//	*a=11;
//	printf("%d",*a);
//}
	
//int main()
//{
//	//1. cach khao bao 1 con tro kieu int
//	//2. cout address
//	//3. cout value
//	//4. update value from 1 to 2
//	//5. khai bao 2 con tro, a = 1, b = a => b = 2, a se xay ra chuyen gi?
//	//6. khai bao function, truyen argument duoi dang con tro
//	
//	int* conTro1;
//	*conTro1=1;
//	
//	printf("%d\n",&conTro1);
//	
//	printf("%d\n",*conTro1);
//	
//	*conTro1 += 1;
//	
//	int *conTro2=conTro1;
//	
//	*conTro2=2;
//	
//	printf("%d",*conTro1);
//	
//	*conTro1 = 1;
//	//&conTro1 = 1;
//	//conTro1=1;
//	
//	cout<<*conTro1 << "\n";
//	cout<<&conTro1 << "\n";
//	cout<<conTro1 << "\n";
//}