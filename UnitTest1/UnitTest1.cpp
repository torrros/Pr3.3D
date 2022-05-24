#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\Pr3.3D\Pr3.3D\Pair.cpp"
#include "C:\Users\vladt\source\repos\Pr3.3D\Pr3.3D\PRrat.cpp"
#include "C:\Users\vladt\source\repos\Pr3.3D\Pr3.3D\PUBrat.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			PUBrat p = { 1,2 };

			Assert::IsTrue(PUBrat { 1,2 }== p);
			
		}
	};
}
