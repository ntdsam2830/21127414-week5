#include<stdio.h>
#include"kiemtra.h"
#include"tinhtoan.h"

int main()
{
	int n;
	n = kiem_tra_so_duong();
	int sum = tinh_tong_SCP_or_SHC(n);
	printf("Tong SCP hoac SHC trong khoang tu 1 den n= %d", sum);
}
