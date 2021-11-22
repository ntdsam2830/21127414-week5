#include<stdio.h>
#include"kiemtra.h"
#include "tinhtoan.h"

int tinh_tich_SNT_or_STL(int n)
{
	int tichSNT = 1;
	int tichSTL = 1;
	int tinh_tich = 1;
	for (int i = 2; i < n; i++)
	{
		if (kiem_tra_so_ngto(i) == true)
		{
			tichSNT *= i;
		}
	}
	for (int j = 2; j < n; j++)
	{
		if (kiem_tra_so_toanle(j) == true)
		{
			tichSTL *= j;
		}
	}
	tinh_tich = tichSNT * tichSTL;
	return tinh_tich;
}
