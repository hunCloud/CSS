#include <iostream>
#include <time.h>

#define LOOPE(i, n) for (int i = 0; i < n; i++)
typedef unsigned long long int BIG_INTEGER;

using namespace std;

void createIntArray(int a[], int n, int from, int to)
{
    srand((unsigned int)time(NULL));
    LOOPE(i, n)
    {
        a[i] = rand() % (to - from + 1) + from;
    }
}
template <typename T>
void printArray(T a[], int n)
{
    LOOPE(i, n)
    {
        cout << a[i] << '\t';
    }
    cout << endl;
}