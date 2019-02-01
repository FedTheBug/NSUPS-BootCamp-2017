#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int NumberOfDigits(int n)
{
    if (n<0) return 0;
    if(n<=1) return 1;
    double digits = 0;
    for(int i=2;i<=n;i++)
    {
        digits = digits+log10(i);
    }
    return floor(digits) +1;
}
int main()
{
    int test,x,result;
    cin >> test;
    int i;
    for(i=0;i<test;i++)
    {
        cin >> x;
        result = NumberOfDigits(x);
        cout << result <<endl;
    }
}

