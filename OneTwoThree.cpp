#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int input,i;char arr[10];
    cin >> input;
    for(i=0;i<input;i++)
    {
        cin >> arr;
        if((arr[0]=='t' && arr[1]=='w')||(arr[0]=='t' && arr[2]=='o')|| (arr[1]=='w' && arr[2]=='o')) cout << "2" << endl;
        else if (strlen(arr)==5) cout << "3" << endl;
        else cout << "1" << endl;
    }


}
