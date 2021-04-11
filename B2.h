// B2.h
#pragma once
class B2 {
private:
	int b2;
public:
	B2() { b2 = 0; };
	B2(int _b2) { b2 = _b2; };
	~B2() {};
	int get_b2() { return b2; };
	void showB2();
	B2& get_B2() { return *this; };
};
