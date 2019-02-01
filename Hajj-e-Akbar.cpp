#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int count = 0;

    while (cin >> str && str!="")
    {
        if (str == "*") break;
        else if (str == "Hajj") cout << "Case " << ++count << ": Hajj-e-Akbar" << endl;
        else  cout << "Case " << ++count << ": Hajj-e-Asghar" << endl;

    }
}
