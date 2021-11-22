#include<stdio.h>
#include "kiemtra.h"

int main()
{
	int n;
	n = kiem_tra_so_duong();
	if (kiem_tra_so_hoanchinh(n) == true)
	{
		printf("%d la so hoan chinh", n);
	}
	else
		printf("%d khong phai la so hoan chinh", n);
}
