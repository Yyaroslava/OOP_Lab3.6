// D1.cpp
#pragma once
#include "D1.h"
#include <iostream>

using namespace std;

void D1::showD1() {
	cout << "[ Class: D1, b1: " << get_b1() << ", b2: " << get_b2() << ", d1: " << d1 << ", size: " << sizeof(*this) << " ]" << endl;
}