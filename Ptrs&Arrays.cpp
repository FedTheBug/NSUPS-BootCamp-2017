#include <iostream>
using namespace std;
int main ()
{
    int A[] = {1,2,3,4,5};
    int i,*p;
    for (i=0;i<5;i++)
    {
        cout << " "<< A[i];
    }
    cout << endl;
    p = A;
    for (i=0;i<5;i++)
    {
        cout << " "<< *p;
        p++;

    }
}
