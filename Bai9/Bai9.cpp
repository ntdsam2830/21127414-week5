#include<stdio.h>
#include<math.h>
#include "kiemtra.h"
#include "tinhtoan.h"

int main()
{
	int n;
	n = kiem_tra_so_duong();
	int tinh_tich = tinh_tich_SNT_or_STL(n);
	printf("Tich cac so nguyen to hoac so toan le trong khoang 1 den %d= %d", n, tinh_tich);
