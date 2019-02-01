#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,revnumb,remainder;
    cin>>T;
    for(int i = 1;i<=T;i++)
    {
        revnumb = 0;
        cin >> N;
        while(N!=0)
        {
            remainder = N%10;
            revnumb = revnumb*10 + remainder;
            N = N/10;

        }
        cout << revnumb << endl;
    }

}
