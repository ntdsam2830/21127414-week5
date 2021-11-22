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
			printf("Gia tri khong hop le, vui long thu lai\n");
		}
	} while (n <= 0);
	return n;
}
bool kiem_tra_so_doi_xung(int n)
{
	int a, b;
	int sum = 0;
	for (b = n; n != 0; n /= 10)
	{
		a = n % 10;
		sum = sum * 10 + a;
	}
	if (b == sum)
	{
		return true;
	}
	return false;
}