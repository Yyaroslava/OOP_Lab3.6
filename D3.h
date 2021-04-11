// D3.h
#pragma once
#include "D1.h"
#include "D2.h"

class D3 : private D1, public D2 {
private:
	int d3;
public:
	D3() : D1(), D2() { d3 = 0; };
	D3(int _b1, int _b2, int _d1, int _d2, int _d3) : D1(_b1, _b2, _d1), D2(_b1, _b2, _d2) { d3 = _d3; };
	~D3() {};
	int get_d3() { return d3; };
	void showD3();
};
