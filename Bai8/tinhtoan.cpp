#include<stdio.h>
#include"kiemtra.h"
#include "tinhtoan.h"

int tinh_tich_SCP_or_SC(int n)
{
	int tichSCP = 1;
	int tichSC = 1;
	int tich_SCP_or_SC = 1;
	for (int i = 2; i < n; i++)
	{
		if (kiem_tra_so_chinhphuong(i) == true)
		{
			tichSCP *= i;
		}
	}
	for (int j = 2; j < n; j++)
	{
		if (kiem_tra_so_chan(j) == true)
		{
			tichSC *= j;
		}
	}
	tich_SCP_or_SC = tichSCP * tichSC;
	return tich_SCP_or_SC;
}
