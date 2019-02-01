#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,cases=1,A,B,C;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> C;
        if((A>B && A<C)||A<B && A>C) cout << "Case "<< cases++ << ": " << A << endl;
        else if ((B>A && B<C)||(B<A && B>C)) cout << "Case "<< cases++ << ": " << B << endl;
        else cout << "Case "<< cases++ << ": " << C << endl;
    }
}
