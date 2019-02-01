#include <iostream>
using namespace std;
int main ()
{
    char arr [20];
    int Cases = 0;
    while(1)
    {
        cin >> arr;
        if(arr[0]=='H') {
            ++Cases;
            cout << "Case "<<Cases<<": Hajj-e-Akbar"<<endl;
        }
        else if(arr[0]=='U') {
            ++Cases;
            cout << "Case "<<Cases<<": Hajj-e-Asghar"<<endl;
        }
        else if (arr[0]=='*') break;
    }

}
