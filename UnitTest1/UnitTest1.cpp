#include "pch.h"
#include "CppUnitTest.h"
#include "c:\users\legion\source\repos\lab_oop_1.1\Lab_oop_1.1\Product.h"
#include "c:\users\legion\source\repos\lab_oop_1.1\Lab_oop_1.1\Product.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Product k;
			k.set_first(10);
			k.set_second(2.2);
			Assert::AreEqual(220., k.power());
		}
	};
}
