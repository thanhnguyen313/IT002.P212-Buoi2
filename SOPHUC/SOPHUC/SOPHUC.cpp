// PHANSO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SOPHUC.h"
#include <iomanip>

using namespace std;

int main()
{
	SOPHUC sp1, sp2;
	int choosen;
	do
	{
		cout << "\n==========CHUONG TRINH KHAI NIEM SO PHUC==========";
		cout << "\n0. Thoat chuong trinh.";
		cout << "\n1. Nhap vao mot so phuc -> Xuat so phuc ra man hinh.";
		cout << "\n2. Nhap vao hai so phuc -> Xuat ra man hinh Tong, Hieu, Tich, Thuong.";
		do
		{
			cout << "\nBan chon: "; cin >> choosen;
		} while (choosen > 2 || choosen < 0);
		switch (choosen)
		{
		case 0:
			cout << "\nChuong trinh dang thoat...";
			return 0;
		case 1:
			sp1.Nhap();
			cout << "\nSo phuc ban vua nhap la: "; sp1.Xuat();
			break;
		case 2:
			sp1.Nhap();
			sp2.Nhap();
			cout << "\nTong 2 so phuc la: "; (sp1.Tong(sp2)).Xuat();
			cout << "\nHieu 2 so phuc la: "; (sp1.Hieu(sp2)).Xuat();
			cout << "\nTich 2 so phuc la: "; (sp1.Tich(sp2)).Xuat();
			cout << fixed << setprecision(2);
			cout << "\nThuong 2 so phuc la: "; (sp1.Thuong(sp2)).Xuat();
			break;
		default:
			break;
		}
	} while (choosen != 0);
	return 0;
}