#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.2.it/lab_6.2it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB62it
{
	TEST_CLASS(UnitTest1LAB62it)
	{
	public:
		
		
		TEST_METHOD(TestMethod1)
		{
			int b[] = { 1, 2, 3, 4, 5 };
			int result = Sum(b, 5);
			Assert::AreEqual(6, result);

		}
	};
}
