#include <iostream>
using namespace std;
int main ()
{
    int cases,x,y;
    cin >> cases;
    while(cases--)
    {
        y=0;
        cin >> x;
        if(x>10)
            y=x-10;
        cout << y << " " << x-y << endl;
    }
}
