//////////////////////////////////////////////////////////////////////////////
// inout.cpp
// файл реалізації – функції введення та виводу масиву

#include <iostream>
#include <iomanip>
#include <string>

#include "inout.h"

using namespace std;

void Create(Student *p, const int N)
{
    int spec;
    for (int i=0; i<N; i++)
    {
        cout << "Студент № " << i+1 << ":" << endl;

        cin.get();  // очищуємо буфер клавіатури – бо залишаються символи
        cin.sync(); // "кінець рядка", які не дають ввести наступний літерний рядок

        cout << "     прізвище: "; getline(cin, p[i].prizv);
        cout << "     курс: "; cin >> p[i].kurs;
        cout << "     спеціальність (0 - Інформатика, 1 - Комп'ютерні науки," << endl
             << "       2 - Математика та економіка, 3 - Трудове навчання," << endl
             << "       4 - Фізика та інформатика): ";
        cin >> spec;
        p[i].spec = (Spec)spec;
        cout << "     оцінка з фізики: "; cin >> p[i].fizyka;
        cout << "     оцінка з математики: "; cin >> p[i].matematyka;
        cout << "     оцінка з інформатики: "; cin >> p[i].informatyka;
        cout << endl;
    }
}

void Print(Student *p, const int N)
{
    cout << "======================================================================="
         << endl;
    cout << "|  № |   Прізвище  | Курс | Спеціальність | Фізика | Матем. | Інформ. |"
         << endl;
    cout << "-----------------------------------------------------------------------"
         << endl;

    for (int i=0; i<N; i++)
    {
        cout << "| " << setw(2) << right << i+1 << " ";
        cout << "| " << setw(12) << left << p[i].prizv
             << "| " << setw(4) << right << p[i].kurs << " "
             << "| " << setw(14) << left << specStr[ p[i].spec ]
             << "| " << setw(6) << right << p[i].fizyka << " "
             << "| " << setw(6) << right << p[i].matematyka << " "
             << "| " << setw(7) << right << p[i].informatyka << " |" << endl;
    }
    cout << "======================================================================="
         << endl;
    cout << endl;
}
