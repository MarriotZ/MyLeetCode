#include <iostream>
using namespace std;
int fib(int n)
{
    int fib(int n) {
    int *arr=new int[n+1];
    if (n == 0||n==1)
    {
        return n;
    }
    arr[0]=0;arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        arr[i]=(arr[i-1]+arr[i-2])%1000000007;
    }
    return arr[n];
    }
}