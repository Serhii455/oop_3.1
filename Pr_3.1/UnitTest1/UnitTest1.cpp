#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_3.1/Date.h"
#include "../Pr_3.1/Date.cpp"
#include "../Pr_3.1/Triad.h"
#include "../Pr_3.1/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Arrange
			int expectedDay = 20;
			int expectedMonth = 12;
			int expectedYear = 2022;

			// Act
			Date date(expectedDay, expectedMonth, expectedYear);

			// Assert
			Assert::AreEqual(date.getDay(), expectedDay);
			Assert::AreEqual(date.getMonth(), expectedMonth);
			Assert::AreEqual(date.getYear(), expectedYear);	
		}
	};
}
