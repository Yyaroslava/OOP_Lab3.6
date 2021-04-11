// D1.h
#pragma once
#include "B1.h"
#include "B2.h"

class D1 : private B1, public B2 {
private:
	int d1;
public:
	D1() : B1(), B2() { d1 = 0; };
	D1(int _d1, int _b1, int _b2) : B1(_b1), B2(_b2) { d1 = _d1; };
	~D1() {};
	int get_d1() { return d1; };
	int get_base_b1() { return get_b1(); };
	int get_base_b2() { return get_b2(); };
	D1& get_D1() { return *this; };
	void showD1();
};
