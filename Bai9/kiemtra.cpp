#include<stdio.h>
#include<math.h>
#include "kiemtra.h"

int kiem_tra_so_duong()
{
	int n;
	do
	{
		printf("Nhap so nguyen duong n= ");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			printf("Moi ban nhap lai\n");
		}
	} while (n <= 0);
	return n;
}

bool kiem_tra_so_ngto(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
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
