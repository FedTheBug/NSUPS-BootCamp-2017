#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int A,B,C,result;
    result = 1;
    cin >> A >> B >> C;
    A = A%C;
    while (B>0)
    {
        if(B & 1)
            result = (result*A)%C;
         B = B>>1;
         A = (A*A) % C;
    }
    cout << result;


}
