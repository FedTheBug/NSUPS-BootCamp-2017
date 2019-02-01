#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases,A,B,C;
    cin >> cases;
    while(cases--)
    {
        cin >> A >> B >> C;
        if((A>B && A<C)||A<B && A>C) cout << A << endl;
        else if ((B>A && B<C)||(B<A && B>C)) cout << B << endl;
        else cout << C << endl;
    }
}
