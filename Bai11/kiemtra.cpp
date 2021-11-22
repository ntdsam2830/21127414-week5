#include<stdio.h>
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
bool kiem_tra_so_hoanchinh(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
	{
		return true;
	}
	return false;
}
