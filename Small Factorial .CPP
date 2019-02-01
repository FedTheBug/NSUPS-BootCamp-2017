#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int T, N,f;
    cin >> T;
    while(T--)
    {
        cin >> N;
        if (N<0)
            break;
        else
        {
            f=1;
            for(int i = 1;i<=N;i++)
            {
              f = f*i;
            }
        }
        cout << f << endl;
    }
}
