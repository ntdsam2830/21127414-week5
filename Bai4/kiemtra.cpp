#include<stdio.h>
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
bool kiem_tra_so_toanle(int n)
{
	while (n > 0)
	{
		int a = n % 10;
		if (a % 2 == 0)
		{
			return false;
		}
		n /= 10;
	}
	return true;
}