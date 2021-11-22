#include<stdio.h>
#include "kiemtra.h"

int main()
{
	int n;
	n = kiem_tra_so_duong();
	if (kiem_tra_so_doi_xung(n) == true)
	{
		printf("%d la so doi xung\n", n);
	}
	else
	{
		printf("%d khong phai la so doi xung\n", n);
	}
}

