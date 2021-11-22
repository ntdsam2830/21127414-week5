#include<stdio.h>
#include<math.h>
#include "kiemtra.h"
#include"tinhtoan.h"

int main()
{
	int n;
	n = kiem_tra_so_duong();
	int tinh_tich_SC = tinh_tich(n);
	printf("Tich cac so chan tu SHC dau tien den SCP cuoi cung la: %d", tinh_tich_SC);
}
