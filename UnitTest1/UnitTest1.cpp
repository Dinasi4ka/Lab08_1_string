#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab08_1_string/Lab08_1_string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		    const string cs = "'-','ab','='";
			const string s= "+-=";
			int count = 2;

			int t = Count(s,cs);
			Assert::AreEqual(count, t);


		}
	};
}
