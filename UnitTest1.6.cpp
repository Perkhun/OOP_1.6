#include "pch.h"
#include "CppUnitTest.h"
#include "..//1.6/LongC.h"
#include "..//1.6/LongC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
	TEST_CLASS(UnitTest16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongC::Pair  s;
			s.Init(1, 2);
			Assert::AreEqual(s.getA(), 1);
		}
	};
}
