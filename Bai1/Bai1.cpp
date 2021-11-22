#include<stdio.h>
#include "kiemtra.h"

int main()
{
	int n;
	n = kiem_tra_so_duong();
	if (kiem_tra_so_chinhphuong(n) == true)
	{
		printf("%d la so chinh phuong", n);
	}
	else
		printf("%d khong phai la so chinh phuong", n);
}