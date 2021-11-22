#include<stdio.h>
#include "kiemtra.h"

int main()
{
	int n;
	n = kiem_tra_so_duong();
	if (kiem_tra_so_toanle(n) == true)
	{
		printf("%d la so toan so le", n);
	}
	else
		printf("%d khong phai la so toan so le", n);
}

