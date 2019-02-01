#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases,n,i,sum;
    cin >> cases;
    for(i=0;i<cases;i++)
    {
        cin >> n;
        sum=0;
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
        cout << sum << endl ;
    }

}
