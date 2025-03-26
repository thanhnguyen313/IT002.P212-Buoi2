#pragma once
class PHANSO
{
private:
	int tu;
	int mau;
public:
	void Nhap();
	void Xuat();
	void RutGon();
	PHANSO Tong();
	PHANSO Hieu();
	PHANSO Tich();
	PHANSO Thuong();
	friend istream& operator>>(istream& is, PHANSO& ps);
	friend ostream& operator<<(ostream& os, const PHANSO& ps);
};

