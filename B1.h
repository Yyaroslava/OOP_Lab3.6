// B1.h
#pragma once
class B1 {
private: 
	int b1;
public:
	B1() { b1 = 0; };
	B1(int _b1) { b1 = _b1; };
	~B1() {};
	int get_b1() { return b1; };
	void showB1();
	B1& get_B1() { return *this; };
};
