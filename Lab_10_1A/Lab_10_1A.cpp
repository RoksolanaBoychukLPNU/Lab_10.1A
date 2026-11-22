//////////////////////////////////////////////////////////////////////////////
// Lab_10_1A.cpp
// головний файл проекту – функція main
// Завдання № 10.1, варіант 2 (рівень А):
//   1. Обчислити кількість студентів, які вчаться без трійок.
//   2. Обчислити процент студентів, у яких середній бал менший 4.

#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>               // забезпечення відображення кирилиці

#include "student.h"
#include "inout.h"
#include "search.h"

using namespace std;

int main()
{                             // забезпечення відображення кирилиці:
    SetConsoleCP(1251);       // встановлення сторінки win-cp1251 в потік вводу
    SetConsoleOutputCP(1251); // встановлення сторінки win-cp1251 в потік виводу

    int N;
    cout << "Введіть кількість студентів N: "; cin >> N;

    Student *p = new Student[N];

    Create(p, N);
    Print(p, N);

    int count = CountNoThrees(p, N);
    cout << "Кількість студентів, які вчаться без трійок:" << endl;
    cout << count << endl;

    double proc = PercentAvgLess4(p, N);
    cout << "Процент студентів, у яких середній бал менший 4:" << endl;
    cout << setprecision(2) << fixed << proc << "%" << endl;

    delete[] p;
    return 0;
}
