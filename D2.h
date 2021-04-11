// D2.h
#pragma once
#include "B1.h"
#include "B2.h"

class D2 : public B1, private B2 {
private:
	int d2;
public:
	D2() : B1(), B2() { d2 = 0; };
	D2(int _d2, int _b1, int _b2) : B1(_b1), B2(_b2) { d2 = _d2; };
	~D2() {};
	int get_d2() { return d2; };
	void showD2();
};

