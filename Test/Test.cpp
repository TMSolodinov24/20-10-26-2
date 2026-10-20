#include "pch.h"
#include "CppUnitTest.h"
#include "../Layer 2/sum.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(Test)
	{
	public:
		int x = sum(2, 2);
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(x, 4);
		}
	};
}
