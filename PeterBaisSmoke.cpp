#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,canHave;
    while(scanf("%d %d",&n,&k)==2)
    {
        canHave = n+(n-1)/(k-1);
        cout << canHave << endl;
    }
    return 0;
}
