#include <iostream>
using namespace std;
int main ()
{
    int x = 125;
    int *p;
    p = &x;
    int **q = &p;
    int ***r = &q;
    cout << "P = " <<p << endl;
    cout << "*P = " << *p << endl;
    cout << "q = " << q << endl;
    cout << "*q = " << *q << endl;
    cout << "**q = " << *(*q) << endl;
    cout << "r = " << r << endl;
    cout << "*r = " << *r << endl;
    cout << "**r = " << *(*r) << endl;
    cout << "**r = " << *(*(*r)) << endl;
    ***r = 10;
    cout << "x = " << x << endl;
    **q = *p+2;
    cout << "**q = " << *(*q) << endl;
}
