#include<stdio.h>
#include "kiemtra.h"
#include "tinhtoan.h"

int tinh_tong_SHC(int n)
{
	int SHC_dautien = 0;
	int SHC_cuoicung = 0;
	int sum = 0;
	for (int i = 2; i < n; i++)
	{
		if (kiem_tra_so_hoanchinh(i) == true)
		{
			SHC_dautien = i;
			break;
		}
	}
	for (int j = n - 1; j >= SHC_dautien; j--)
	{
		if (kiem_tra_so_hoanchinh(j) == true)
		{
			SHC_cuoicung = j;
			break;
		}
	}
	for (int k = SHC_dautien; k <= SHC_cuoicung; k++)
	{
		sum += k;
	}
	return sum;
}
