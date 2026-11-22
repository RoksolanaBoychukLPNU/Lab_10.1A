//////////////////////////////////////////////////////////////////////////////
// search.cpp
// файл реалізації – функції послідовного (лінійного) пошуку в масиві

#include "search.h"

int CountNoThrees(Student *p, const int N)
{
    int k=0;
    for (int i=0; i<N; i++)
    {
        if ( p[i].fizyka >= 4 &&
             p[i].matematyka >= 4 &&
             p[i].informatyka >= 4 )
        {
            k++;
        }
    }
    return k;
}

double PercentAvgLess4(Student *p, const int N)
{
    int k=0;
    for (int i=0; i<N; i++)
    {
        double avg = ( p[i].fizyka + p[i].matematyka + p[i].informatyka ) / 3.0;
        if ( avg < 4 )
            k++;
    }
    return 100.0*k/N;
}
