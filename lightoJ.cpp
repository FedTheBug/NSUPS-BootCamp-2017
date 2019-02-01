#include <iostream>
using namespace std;
int main()
{
    int i;
    int a,b,sum,cases;
    cin >> cases;
    for(i=1;i<=cases;i++)
    {
        cin >> a >> b;
        sum = a+b;
        cout << "Case " << i << ": " <<sum << endl;
    }
}


