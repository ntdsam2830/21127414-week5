#include<stdio.h>
#include<math.h>
#include "kiemtra.h"

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
		if (kiem_tra_so_chinhphuong(j) == true)
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
