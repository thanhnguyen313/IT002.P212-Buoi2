#include <iostream>
#include "TIME.h"

using namespace std;

istream& operator>>(istream& is, TIME& time) {
    is >> time.hour >> time.minutes >> time.second;
    return is;
}
ostream& operator<<(ostream& os, const TIME& time) {
    os << time.hour << " Gio " << time.minutes << " Phut " << time.second << " Giay ";
    return os;
}
bool TIME::CheckTime() //Ham kiem tra xem thoi gian co hop le ko.
{
    if (hour > 23 || hour < 0 || minutes > 59 || minutes < 0 || second > 59 || second < 0)
        return false;
    return true;
}
void TIME::Input()
{
    do
    {
        cout << "\nNhap thoi gian (Gio Phut Giay): ";
        cin >> hour >> minutes >> second;
        if (!CheckTime())
            cout << "\nVui long nhap thoi gian hop le!";
    } while (!CheckTime());
}
void TIME::Output()
{
    cout << *this;
}
void TIME::addOneSecond(TIME& time)
{
    time.second++;
    if (time.second >= 60)
    {
        time.minutes++;
        time.second = 0;
        if (time.minutes >= 60)
        {
            time.hour++;
            time.minutes = 0;
        }
    }
    if (time.hour >= 24)
    {
        time.hour = 0;
        cout << "\nThoi gian hien tai sau khi da cong them 1 giay: ";
        cout << time;
        cout << "\nChao ngay moi, chuc ban ngay moi tot lanh!";
    }
    else if (time.hour < 24)
    {
        cout << "\nThoi gian hien tai sau khi da cong them 1 giay: ";
        cout << time;
    }
}
