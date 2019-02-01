#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],t,c1=0,c2=0,x,y,i;
    cin >> t;
    for (i=1;i<=t;i++)
    {
        cin >> arr[i];
    }
    for (i=1;i<=t;i++)
    {
        if(arr[i]%2==0)
        {
            c1++;
            x=i;
        }
        else
        {
            c2++;
            y=i;
        }
    }
    if(c1==1) cout << x << endl;
    else cout << y << endl;

}
