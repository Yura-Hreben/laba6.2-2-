#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.2(2)/laba6.2(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest622
{
	TEST_CLASS(UnitTest622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const size = 25;
			int a[size];
			int i = 0;
			arr(size, a, i, i);
			rand(size, a, i);
			in(a, size, i, i, i);
		}
	};
}
