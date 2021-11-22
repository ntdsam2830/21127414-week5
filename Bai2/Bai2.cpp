#include<stdio.h>
#include "kiemtra.h"

int main()
{
	int n;
	n = kiem_tra_so_duong();
	if (kiem_tra_so_ngto(n) == true)
	{
		printf("%d la so nguyen to", n);
	}
	else
		printf("%d khong phai la so nguyen to", n);
}
