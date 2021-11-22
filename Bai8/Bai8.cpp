#include<stdio.h>
#include"kiemtra.h"
#include "tinhtoan.h"

int main()
{
	int n;
	n = kiem_tra_so_duong();
	int tich_SCP_or_SC = tinh_tich_SCP_or_SC(n);
	printf("Tich cac so chinh phuong hoac so chan trong khoang tu 1 den %d= %d", n, tich_SCP_or_SC);
}