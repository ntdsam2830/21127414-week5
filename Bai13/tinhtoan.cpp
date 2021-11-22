#include<stdio.h>
#include<math.h>
#include"kiemtra.h"
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
int tinh_tong_SCP_or_SHC(int n)
{
	int sum = 0;
	int sum_SCP = 0;
	int sum_SHC = 0;
	for (int i = 2; i < n; i++)
	{
		if (kiem_tra_so_chinhphuong(i) == true)
		{
			sum_SCP += i;
		}
	}
	for (int j = 2; j < n; j++)
	{
		if (kiem_tra_so_hoanchinh(j) == true)
		{
			sum_SHC += j;
		}
	}
	sum = sum_SCP + sum_SHC;
	return sum;
}
int tinh_tich_SCP_or_SC(int n)
{
	int tich_SCP = 1;
	int tich_SC = 1;
	int tich_SCP_or_SC = 1;
	for (int i = 2; i < n; i++)
	{
		if (kiem_tra_so_chinhphuong(i) == true)
		{
			tich_SCP *= i;
		}
	}
	for (int j = 2; j < n; j++)
	{
		if (kiem_tra_so_chan(j) == true)
		{
			tich_SC *= j;
		}
	}
	tich_SCP_or_SC = tich_SCP * tich_SC;
	return tich_SCP_or_SC;
}
int tinh_tich_SNT_or_STL(int n)
{
	int tich_SNT = 1;
	int tich_STL = 1;
	int tinh_tich = 1;
	for (int i = 2; i < n; i++)
	{
		if (kiem_tra_so_ngto(i) == true)
		{
			tich_SNT *= i;
		}
	}
	for (int j = 2; j < n; j++)
	{
		if (kiem_tra_so_toanle(j) == true)
		{
			tich_STL *= j;
		}
	}
	tinh_tich = tich_SNT * tich_STL;
	return tinh_tich;
}
int Tinh_Tong_So_HoanChinh(int n)
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
int tinh_tich(int n)
{
	int SHC_dautien;
	int SCP_cuoicung;
	int tich_cac_SC = 1;
	for (int i = 2; i < n; i++)
	{
		if (kiem_tra_so_hoanchinh(i) == true)
		{
			SHC_dautien = i;
			break;
		}
	}
	for (int j = n - 1; j > 1; j--)
	{
		if (kiem_tra_so_hoanchinh(j) == true)
		{
			SCP_cuoicung = j;
			break;
		}
	}
	for (int k = SHC_dautien; k <= SCP_cuoicung; k++)
	{
		if (kiem_tra_so_chan(k) == true)
		{
			tich_cac_SC *= k;
		}
	}
	return tich_cac_SC;
}

