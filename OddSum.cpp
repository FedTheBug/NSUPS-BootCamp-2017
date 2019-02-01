#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    while(scanf("%d",&test)==1)
    {
        int a,b,i,j;
        int sum;
        for(i=1;i<=test;i++)
        {
            sum=0;
            cin >> a >> b;
            for(j=a;j<=b;j++)
            {
                if(j%2!=0) sum = sum+j;
            }
        cout << "Case "<<i<<": " <<sum <<endl;
        }
    }
}

