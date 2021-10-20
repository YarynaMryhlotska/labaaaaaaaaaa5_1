//laba5__1
//ћриглоцька ярина
//IT-12
#include "pch.h"
#include "CppUnitTest.h"
#include "../labaaaaaaaaa5(1)/labaaaaaa5(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1laba51
{
	TEST_CLASS(UnitTest1laba51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = (h(s * s, t * t) + (h(s + t, 1) * h(s + t, 1))) / (1 + h(s * t, 2) * h(s * t, 2));
			Assert::AreEqual(c, 0, 4);
		}
	};
}
