
/*
    DATA STRUCTURE AND ALGORITHMS
            18 CTT2
        
*/

#include "FunctionSupport.h"

using namespace std;

/*
    Given an integer array, let write a program to find index of the second large with 
    O(n) complex.
    Example: Given integer array S = {1, 9, , 11, 2, 21, 15, 5}: The element which second large is 15
    has index is 6.

*/
int findSecondLargest(int a[], int n)
{
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[max] < a[i])
        {
            max = i;
        }
    }
    int secondMax;
    if (max != 0)
    {
        secondMax = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[secondMax] != a[max] && a[secondMax] < a[i])
            {
                secondMax = i;
            }
        }
    }
    else
    {
        secondMax = 1;
        for (int i = 2; i < n; i++)
        {
            if (a[secondMax] != a[max] && a[secondMax] < a[i])
            {
                secondMax = i;
            }
        }
    }   
    return secondMax;
}
void Ex1()
{
    int const MAX_ARRAY = 22;
    int a[MAX_ARRAY] = {0};
    createIntArray(a, MAX_ARRAY, -5, 23);
    printArray(a, MAX_ARRAY);
    cout<<"Second largest element has index: "<<findSecondLargest(a, MAX_ARRAY);
}


/*
    Exercise 2: Given positive integer {F1} which defined as (with a is positive join in input data):
    F1 = a
    F2 = 18*a2 + 10
    F n+1 = 18*Fn+10F n-1 with n > 1

    With every concrete value of a, we calculate array {Fn}

*/

void Ex2()
{
    
}
int main(int argc, char const *argv[])
{
    Ex1();
    return 0;
}

