﻿#include <iostream>

using namespace std;
void example3_7()
{
	int total = 0;
	for (int i = 1; i <= 5; i++) {
		cout << "i = " << i << endl;
		total += i;
		cout << "total = " << total << endl;
	}
	cout << "1부터 " << 5 << " 까지의 합계는 " << total << "입니다" << endl;
}