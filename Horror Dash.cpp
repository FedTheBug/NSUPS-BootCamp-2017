#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int cases,nmb,c,lar;
    cin >> cases;
    for (int i = 1;i<=cases;i++)
    {
        cin >> nmb;
        lar = 0;
        for (int j = 0; j < nmb;j++)
        {
            cin >> c;
            lar = max (c,lar);

        }
        cout << "Case " << i << ": " <<lar << endl;
    }
}
