#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,cases=1,a,b,sum;
    cin >> T;
    while (T--)
    {
        sum  = 0;
        cin >> a >> b;
        for (int i = a;i <=b ; i++)
        {

            if (i%2!=0)
                sum += i;
        }
        cout << "Case " << cases++ << ": " << sum << endl;
    }
}
