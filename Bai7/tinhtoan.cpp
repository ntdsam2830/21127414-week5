#include<stdio.h>
#include"kiemtra.h"
#include "tinhtoan.h"

int tinh_tong_SCP_or_SHC(int n)
{
	int sum = 0;
	int sumSCP = 0;
	int sumSHC = 0;
	for (int i = 2; i < n; i++)
	{
		if (kiem_tra_so_chinhphuong(i) == true)
		{
			sumSCP += i;
		}
	}
	for (int j = 2; j < n; j++)
	{
		if (kiem_tra_so_hoanchinh(j) == true)
		{
			sumSHC += j;
		}
	}
	sum = sumSCP + sumSHC;
	return sum;
}
