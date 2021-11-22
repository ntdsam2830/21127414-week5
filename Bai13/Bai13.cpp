#include<stdio.h>
#include<math.h>
#include"kiemtra.h"
#include "tinhtoan.h"
#include"timkiem.h"

int main()
{
	int n;
	printf("--- CHUC NANG ---\n");
	printf("Nhap 1 - Kiem tra so chinh phuong\n");
	printf("Nhap 2 - Kiem tra so nguyen to\n");
	printf("Nhap 3 - Kiem tra so doi xung\n");
	printf("Nhap 4 - Kiem tra so toan le\n");
	printf("Nhap 5 - Kiem tra so hoanh chinh\n");
	printf("Nhap 6 - Tinh tong cac so nguyen to tu 1 den n\n");
	printf("Nhap 7 - Tinh tong cac so chinh phuong hoac so hoan chinh trong khoang tu 1 den n\n");
	printf("Nhap 8 - Tinh tich cac so chinh phuong hoac so chan trong khoang tu 1 den n\n");
	printf("Nhap 9 - Tinh tong cac so nguyen to hoac so toan le trong khoang tu 1 den n\n");
	printf("Nhap 10 - Tim so chinh phuong dau tien trong khoang tu 1 den n\n");
	printf("Nhap 11 - Tim so hoan chinh cuoi cung trong khoang tu 1 den n\n");
	printf("Nhap 12 - Tinh tong cac so tu so hoan chinh dau tien den so hoan chinh cuoi cung trong khoang tu 1 den n\n");
	printf("Nhap 13 - Tinh tich cac so chan tu so hoan chinh dau tien den so chinh phuong cuoi cung trong khoang tu 1 den n\n");
	printf("--- ************************* ---\n");
	printf("Nhap chuc nang: ");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
	{
		int n;
		n = kiem_tra_so_duong();
		if (kiem_tra_so_chinhphuong(n) == true)
		{
			printf("%d la so chinh phuong\n", n);
		}
		else
			printf("%d khong phai la so chinh phuong\n", n);
		break;
	}
	case 2:
	{
		int n;
		n = kiem_tra_so_duong();
		if (kiem_tra_so_ngto(n) == true)
		{
			printf("%d la so nguyen to\n", n);
		}
		else
			printf("%d khong phai la so nguyen to\n", n);
		break;
	}
	case 3:
	{
		int n;
		n = kiem_tra_so_duong();
		if (kiem_tra_so_doixung(n) == true)
		{
			printf("%d la so doi xung\n", n);
		}
		else
			printf("%d khong phai la so doi xung\n", n);
		break;
	}
	case 4:
	{
		int n;
		n = kiem_tra_so_duong();
		if (kiem_tra_so_toanle(n) == true)
		{
			printf("%d la so toan so le\n", n);
		}
		else
			printf("%d khong phai la so toan so le\n", n);
		break;
	}
	case 5:
	{
		int n;
		n = kiem_tra_so_duong();
		if (kiem_tra_so_hoanchinh(n) == true)
		{
			printf("%d la so hoan chinh\n", n);
		}
		else
			printf("%d khong phai la so hoan chinh\n", n);
		break;
	}
	case 6:
	{
		int n;
		n = kiem_tra_so_duong();
		int sum;
		sum = tinh_tong_so_ngto(n);
		printf("Tong cac so nguyen to tu 1 den n= %d\n", sum);
		break;
	}
	case 7:
	{
		int n;
		n = kiem_tra_so_duong();
		int sum = tinh_tong_SCP_or_SHC(n);
		printf("Tong SCP hoac SHC trong khoang tu 1 den n= %d\n", sum);
		break;
	}
	case 8:
	{
		int n;
		n = kiem_tra_so_duong();
		int tich_SCP_or_SC = tinh_tich_SCP_or_SC(n);
		printf("Tich cac so chinh phuong hoac so chan trong khoang tu 1 den %d= %d\n", n, tich_SCP_or_SC);
		break;
	}
	case 9:
	{
		int n;
		n = kiem_tra_so_duong();
		int tinh_tich = tinh_tich_SNT_or_STL(n);
		printf("Tich cac so nguyen to hoac so toan le trong khoang 1 den %d= %d\n", n, tinh_tich);
		break;
	}
	case 10:
	{
		int n;
		n = kiem_tra_so_duong();
		tim_SCP_dautien(n);
		break;
	}
	case 11:
	{
		int n;
		n = kiem_tra_so_duong();
		tim_SHC_cuoicung(n);
		break;
	}
	case 12:
	{
		int n;
		n = kiem_tra_so_duong();
		int sum_sohoanchinh = tinh_tong_SHC(n);
		printf("Tong cac so hoan chinh: %d\n", sum_sohoanchinh);
		break;
	}
	case 13:
	{
		int n;
		n = kiem_tra_so_duong();
		int tinh_tich_SC = tinh_tich(n);
		printf("Tich cac so chan tu SHC dau tien den SCP cuoi cung la: %d\n", tinh_tich_SC);
		break;
	}
	default:
	{
		printf("Khong co truong hop nao thoa");
		break;
	}
	}
	return 0;
}