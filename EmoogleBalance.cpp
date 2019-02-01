#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,j=0;
    while (cin>>tc && tc!=0){
            j++;
            int treatPending=0,treatDone=0,i,counts;
    for(i=0;i<tc;i++)
    {
        cin >> counts;
        if(counts>0) {treatPending ++;}
        else if(counts==0) {treatDone ++;}

    }
    cout<<"Case " <<j<<": "<<treatPending-treatDone<<endl;
    }
    return 0;
 }

