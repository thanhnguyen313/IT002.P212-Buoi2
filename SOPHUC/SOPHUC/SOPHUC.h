#pragma once
#include <iostream>
using namespace std;
class SOPHUC
{
private:
	float Thuc;
	float Ao;
public:
	void Nhap();
	void Xuat();
	friend istream& operator>>(istream& is, SOPHUC& st);
	friend ostream& operator<<(ostream& os, const SOPHUC& st);
	SOPHUC operator+(const SOPHUC& st) const;
	SOPHUC operator-(const SOPHUC& st) const;
	SOPHUC operator*(const SOPHUC& st) const;
	SOPHUC operator/(const SOPHUC& st) const;
	SOPHUC& operator=(const SOPHUC& st);
	SOPHUC Tong(const SOPHUC& st);
	SOPHUC Hieu(const SOPHUC& st);
	SOPHUC Tich(const SOPHUC& st);
	SOPHUC Thuong(const SOPHUC& st);
};

