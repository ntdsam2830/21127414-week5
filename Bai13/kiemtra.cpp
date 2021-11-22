#include<stdio.h>
#include<math.h>
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
bool kiem_tra_so_chinhphuong(int n)
{
	int a = sqrt(n);
	if (a * a == n)
	{
		return true;
	}
	return false;
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
bool kiem_tra_so_doixung(int n)
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
bool kiem_tra_so_hoanchinh(int n)
{
	int sum = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
		return true;
	else
		return false;
}
bool kiem_tra_so_chan(int n)
{
	if (n % 2 == 0)
		return true;
	return false;
}

