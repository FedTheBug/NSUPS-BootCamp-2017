#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0,arr[100];
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {

        cin >> arr[i];
        for (int j=0;j<i;j++)
        {
            if ((arr [i] + arr[j])%k==0)
                c++;
        }
    }
    cout << c << endl;

}
