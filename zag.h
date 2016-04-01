#pragma once
#include <iostream>
using namespace std;
class OperandOne

{
protected:
	int x;
public:
	int y;
	void set(int i) { x = i; }
};

class OperandTwo : public OperandOne {
	
public:
	int z;
	void show() {
	
		cout << "x= " << x << endl;
		cout << "y= " << y << endl;
		cout << "z= " << z << endl;
	}
};

