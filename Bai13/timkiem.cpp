#include<stdio.h>
#include"kiemtra.h"
#include "timkiem.h"

void tim_SCP_dautien(int n)
{
	int i;
	int check = -1;
	for (i = 2; i < n; i++)
	{
		if (kiem_tra_so_chinhphuong(i) == true)
		{
			check = i;
			break;
		}
	}
	if (check != -1)
	{
		printf("%d la so chinh phuong dau tien trong khoang tu 1 den %d\n", check, n);
	}
	else
		printf("-1");
}
void tim_SHC_cuoicung(int n)
{
	int check = -1;
	for (int i = n - 1; i > 1; i--)
	{
		if (kiem_tra_so_hoanchinh(i) == true)
		{
			check = i;
			break;
		}
	}
	if (check != -1)
	{
		printf("%d la so hoan chinh cuoi cung trong khoang tu 1 den %d\n", check, n);
	}
	else
		printf("-1");
}

