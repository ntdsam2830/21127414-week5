#include<stdio.h>
#include "kiemtra.h"
#include "timkiem.h"

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
		printf("%d la so hoan chinh cuoi cung trong khoang tu 1 den %d", check, n);
	}
	else
		printf("-1");
}
