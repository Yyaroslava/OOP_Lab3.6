// D3.cpp
#pragma once
#include "D3.h"
#include <iostream>

using namespace std;

void D3::showD3() {
	cout << "[ Class: D3, b1: " << get_base_b1() << ", b2: " << get_base_b2() << ", d1: " << get_d1() << ", d2: " << get_d2() << ", d3: " << d3 << ", size: " << sizeof(*this) << " ]" << endl;
}