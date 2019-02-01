#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(long long in) {

    int  j=0,i,k;
    char ArrResult [18];
    while(in) {
        ArrResult[j++] = in % 10;
        in = in/10;
    }
    for(i=0,k=j-1;i<k;++i,--k) {
        if(ArrResult[i] != ArrResult[k])
            return false;
    }
    return true;
}
long long rev(long long n)
{
    long long R=0,remainder;
    while (n!=0)
    {
        remainder = n%10;
        R = R*10+remainder;
        n = n/10;
    }
    return R;
}
int main() {

    long long num;
    int test, counter;

    cin >> test;

    while( test-- ) {

        cin >> num;
        counter= 0;
        while( true ) {

            num += rev(num);
            ++counter;
            if( isPalindrome(num) ){
                cout << counter << " " << num <<endl;
                break;
            }

        }

    }
}

