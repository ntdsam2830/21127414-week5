#include<stdio.h>
#include"kiemtra.h"
#include"tinhtoan.h"

int main()
{
	int n;
	n = kiem_tra_so_duong();
	int sum;
	sum = tinh_tong_so_ngto(n);
	printf("Tong cac so nguyen to tu 1 den n la: %d", sum);
}
