#include <iostream>
using namespace std;
int main ()
{
    int a = 1025;
    int *p;
    p = &a;
    cout <<"Size of a = "<< sizeof(int)<<endl;
    cout <<"Address of p:"<< p <<endl;
    cout <<"Address of p+1:"<< p+1 <<endl;
    cout <<"*P = "<< *p <<endl;
    *p = 12; //Dereferencing
    cout << "After dereferencing the value of a = " <<a <<endl;
    char *cp;
    cp = (char*)p;
    cout <<"cp = "<<cp<<endl;
    cout <<"Size of char "<<sizeof(char)<<endl;
    cout <<"Address of cp: "<< cp <<endl;
    cout <<"Value at adress cp = "<< *cp <<endl;
    void *p0;
    p0 = p;
    cout <<"Address"<<p0;
    return 0;
}
