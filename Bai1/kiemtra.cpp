#include <stdio.h>
#include <math.h>
#include "kiemtra.h"

int kiem_tra_so_duong()
{
	int n;
	do
	{
		printf("Nhap so nguyen duong n: ");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			printf("Gia tri khong hop le, vui long nhap lai!!!\n");
		}
	} while (n <= 0);
	return n;
}
bool kiem_tra_so_chinhphuong(int n)
{
	int a = sqrt(n);
	if (a * a == n)
	{
		return true;
	}
	return false;
}