// D2.cpp
#pragma once
#include "D2.h"
#include <iostream>

using namespace std;

void D2::showD2() {
	cout << "[ Class: D2, b1: " << get_b1() << ", b2: " << get_b2() << ", d2: " << d2 << ", size: " << sizeof(*this) << " ]" << endl;
}