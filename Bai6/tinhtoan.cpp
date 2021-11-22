#include<stdio.h>
#include "kiemtra.h"
#include "tinhtoan.h"

int tinh_tong_so_ngto(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (kiem_tra_so_ngto(i) == true)
		{
			sum += i;
		}
	}
	return sum;
}
