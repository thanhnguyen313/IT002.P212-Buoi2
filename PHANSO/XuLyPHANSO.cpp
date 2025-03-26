#include"PHANSO.h"
#include<iostream>

using namespace std;

istream& operator>>(istream& is, PHANSO& ps) 
{
    cout << "\nNhap tu so: "; is >> ps.tu;
    cout << "\nNhap mau so: "; is >> ps.mau;
    return is;
}
ostream& operator<<(ostream& os, const PHANSO& ps)
{
    os << ps.tu << "/" << ps.mau;
    return os;
}
void PHANSO::Nhap()
{
    cout << "\nNhap phan so"; cin >> *this;
}
//void Xuat();
//void RutGon();
//PHANSO Tong();
//PHANSO Hieu();
//PHANSO Tich();
//PHANSO Thuong();