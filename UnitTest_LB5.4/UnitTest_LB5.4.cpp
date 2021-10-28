#include "pch.h"
#include "CppUnitTest.h"
#include "..\LB5.4\LB5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLB54
{
	TEST_CLASS(UnitTestLB54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double d = P0(19);
			Assert::AreEqual(1., d);
		}
	};
}
