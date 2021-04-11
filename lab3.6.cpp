// lab3.6.cpp
#include <iostream>
#include "B1.cpp"
#include "B2.cpp"
#include "D1.cpp"
#include "D2.cpp"
#include "D3.cpp"

using namespace std;

int main() {
	
	B1 b11;
	cout << "b11: ";
	b11.showB1();

	B1 b12(3);
	cout << "b12: ";
	b12.showB1();

	B2 b21;
	cout << "b21: ";
	b21.showB2();

	B2 b22(4);
	cout << "b22: ";
	b22.showB2();

	D1 d11;
	cout << "d11: ";
	d11.showD1();

	D1 d12(5,6,7);
	cout << "d12: ";
	d12.showD1();

	D2 d21;
	cout << "d21: ";
	d21.showD2();

	D2 d22(8, 9, 10);
	cout << "d22: ";
	d22.showD2();

	D3 d31;
	cout << "d31: ";
	d31.showD3();

	D3 d32(11, 12, 13, 14, 15);
	cout << "d32: ";
	d32.showD3();

	return 0;
}
