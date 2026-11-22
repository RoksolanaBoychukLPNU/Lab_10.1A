#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_10_1A/student.h"
#include "../Lab_10_1A/search.h"

#include "../Lab_10_1A/student.cpp"
#include "../Lab_10_1A/search.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101A
{
    TEST_CLASS(UnitTest101A)
    {
    public:

        TEST_METHOD(TestCountNoThrees)
        {
            Student p[4];
            p[0].fizyka = 5; p[0].matematyka = 5; p[0].informatyka = 4; // без трійок
            p[1].fizyka = 3; p[1].matematyka = 4; p[1].informatyka = 5; // є трійка
            p[2].fizyka = 4; p[2].matematyka = 4; p[2].informatyka = 4; // без трійок
            p[3].fizyka = 5; p[3].matematyka = 2; p[3].informatyka = 5; // є двійка

            int k = CountNoThrees(p, 4);
            Assert::AreEqual(2, k);
        }

        TEST_METHOD(TestPercentAvgLess4)
        {
            Student p[4];
            p[0].fizyka = 5; p[0].matematyka = 5; p[0].informatyka = 4; // 4.67
            p[1].fizyka = 3; p[1].matematyka = 4; p[1].informatyka = 5; // 4.00
            p[2].fizyka = 3; p[2].matematyka = 3; p[2].informatyka = 4; // 3.33
            p[3].fizyka = 5; p[3].matematyka = 2; p[3].informatyka = 4; // 3.67

            double proc = PercentAvgLess4(p, 4);
            Assert::AreEqual(50.0, proc, 1e-9);
        }
    };
}
