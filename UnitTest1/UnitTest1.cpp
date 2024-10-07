#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.1/5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace solutiontest
{
    TEST_CLASS(solutiontest)
    {
    public:

        TEST_METHOD(Test_h_Function)
        {
            double result = h(1.0, 2.0, 3.0);
            double expected = (1.0 + 2.0 + 3.0) / (1.0 * 1.0 + 2.0 * 2.0 + 3.0 * 3.0); 

            Assert::AreEqual(result, expected, 1e-6); 
        }
    };
}
