#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_0/Lab_05_0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest050
{
	TEST_CLASS(UnitTest050)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(sum(2, 3), 5);
		}
	};
}
