// laba.cpp: определяет точку входа для консольного приложения.
//
#include <iostream>
#include "stdafx.h"
#include "zag.h"

using namespace std;

int _tmain() {
	OperandTwo obj;
	obj.set(15);
	obj.y = 10;
	obj.z = 15;
	obj.show();
	int sum;
	sum = obj.z + obj.y;
	cout << "Sum of two operands: " << sum << endl;
	system("pause");
	return 0;
}
