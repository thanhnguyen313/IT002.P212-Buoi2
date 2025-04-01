// TIME.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TIME.h"
using namespace std;

int main()
{
    TIME time;
    time.Input();
    time.Output();
    time.addOneSecond(time);
}


