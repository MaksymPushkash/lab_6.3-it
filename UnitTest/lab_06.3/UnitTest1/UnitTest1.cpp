#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include <sstream>
#include <algorithm> 
#include "../lab_06.3/lab_06.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestProject
{
    TEST_CLASS(UnitTestProject)
    {
    public:

        // ���� ��� ������� generateArray
        TEST_METHOD(TestGenerateArray)
        {
            const int SIZE = 10;
            const int MIN_VAL = -50;
            const int MAX_VAL = 50;
            std::vector<int> arr(SIZE);

            generateArray(arr, MIN_VAL, MAX_VAL);

            // ����������, �� �� �������� ������ � ����� �� MIN_VAL �� MAX_VAL
            for (const int& elem : arr) {
                Assert::IsTrue(elem >= MIN_VAL && elem <= MAX_VAL, L"Element out of range.");
            }
        }

        // ���� ��� ������� sortArray
        TEST_METHOD(TestSortArray)
        {
            std::vector<int> arr = { 5, 3, 8, 1, -4, 10, 7 };
            std::vector<int> expectedArr = { -4, 1, 3, 5, 7, 8, 10 };

            sortArray(arr);

            // ����������, �� ����� ������������ �� �� ���������
            Assert::IsTrue(std::is_sorted(arr.begin(), arr.end()), L"Array is not sorted.");

            // ����� ����������, �� ����� �� ���������� �������
            Assert::IsTrue(arr == expectedArr, L"Sorted array does not match expected.");
        }

        

    };
}
