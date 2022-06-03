#pragma once
#include <iostream>
#include <iomanip>
#include "TimeHMS.h"

int main()
{
	TimeHMS	t1(10000), t2, t3(11, 22, 33), t4, t5, t6;

	cout << "t2: ";
	cin >> t2;

	cout << "t1      = " << t1;
	cout << "t2      = " << t2;
	cout << "t3      = " << t3;
	cout << "t1+t2   = " << t1 + t2;
	cout << "t1-t2   = " << t1 - t2;
	cout << "++t1    = " << ++t1;
	cout << "--t1    = " << --t1;
	cout << "t1++    = " << t1++;
	cout << "t1--    = " << t1--;

	cout << "t1[0~2] = " << t1[0] << " " << t1[1] << " " << t1[2] << endl;
	cout << "t2[sec] = " << (int)t2 << endl;
	cout << "t2[hour]= " << (double)t2 << endl;
	cout << "2*t2    = " << 2 * t2;
}


