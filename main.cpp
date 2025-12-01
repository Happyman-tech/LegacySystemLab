#include "pch.h" 

#include "CppUnitTest.h" 

#include "C:\\Users\\Home\\Downloads\\Тестування програмного забезпечення\\Тестування програмного забезпечення\Header1.h" 

 

using namespace Microsoft::VisualStudio::CppUnitTestFramework; 

void checkValidParams(int n, double h) { 

if (n < 1 || h == 0.0) { 

throw "Wrong Data"; 

} 

} 

 

double calculate(int n, double x) { 

double y = 0.0; 

if (x < 0.0) { 

for (int i = 1; i <= n - 1; i++) { 

for (int j = 1; j <= n; j++) { 

y += (x - i + j); 

} 

} 

} 

else { 

for (int i = 1; i <= n - 1; i++) { 

y += x / static_cast<double>(i); 

} 

} 

return y; 

} 

 

namespace UnitTest2 

{ 

TEST_CLASS(calculate_test) 

{ 

public: 

 

TEST_METHOD(calculate_get3and2_3returned) 

{ 

int n = 3; 

double x = 2.0; 

double expected = 3.0; 

double actual = calculate(n, x); 

Assert::AreEqual(expected, actual); 

} 

TEST_METHOD(calculate_get2and7_7returned) { 

int n = 2; 

double x = 7.0; 

double expected = 7.0; 

double actual = calculate(n, x); 

Assert::AreEqual(expected, actual); 

} 

}; 

TEST_CLASS(checkValidParams_Tests) { 

public: 

TEST_METHOD(checkValidParams_n10_noExceptionThrown) { 

int n = 10; 

double h = 1.5; 

try { 

checkValidParams(n, h); 

Assert::IsTrue(true); 

} 

catch (...) { 

Assert::Fail(); 

} 

} 

TEST_METHOD(checkValidParams_n0_exceptionThrown) { 

int n = 0; 

double h = 1.5; 

try { 

checkValidParams(n, h); 

Assert::Fail(); 

} 

catch (...) { 

Assert::IsTrue(true); 

} 

} 

TEST_METHOD(checkValidParams_h0_exceptionThrown) { 

int n = 5; 

double h = 0.0; 

try { 

checkValidParams(n, h); 

Assert::Fail(); 

} 

catch (...) { 

Assert::IsTrue(true); 

} 

} 

 

}; 

}
