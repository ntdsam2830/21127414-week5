#include<stdio.h>
#include"kiemtra.h"
#include"tinhtoan.h"

int main()
{
	int n;
	n = kiem_tra_so_duong();
	int sum_SHC = tinh_tong_SHC(n);
	printf("Tong cac so hoan chinh: %d", sum_SHC);
}
