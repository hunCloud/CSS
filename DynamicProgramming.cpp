#include "FunctionSupport.h"

/*
    Fibo 1 initialize
*/
BIG_INTEGER Fibo1(int n)
{
    BIG_INTEGER F[n+1];
    F[1]=1;
    F[0]=0;
    for (int i = 2; i < n+1; i++)
    {
        F[i]=F[i-1]+F[i-2];
    }
    return F[n];
}
BIG_INTEGER Fibo2(int n, int a)
{
    BIG_INTEGER F[n+1];
    F[0]=0;
    F[1]=a;
    F[2]=18*a+10;
    for (int i = 3; i < n+1; i++)
    {
        F[i]=18*F[i-1]+10*F[i-2];
    }
    return F[n];
}
int main(int argc, char const *argv[])
{
    int i=atoi(argv[1]);
    cout<<Fibo2(i, 2);
    return 0;
}
