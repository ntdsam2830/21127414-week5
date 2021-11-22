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
		printf("%d la so chinh phuong dau tien trong khoang tu 1 den %d", check, n);
	}
	else
		printf("-1");
}
