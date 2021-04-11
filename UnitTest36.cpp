#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab3.6/D3.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest36
{
	TEST_CLASS(UnitTest36)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			D3 d3(1, 2, 3, 4, 5);
			Assert::AreEqual(d3.get_d3(), 5);
		}
	};
}
