//#include <iostream>
#include<bits/stdc++.h>
//#include <fstream>
//#include<cstdio>
using namespace std;

int main()

{
    long long x,y;
    long long result;
    while(scanf("%lld%lld",&x,&y)!=EOF){
            result = abs(y-x);
            printf("%lld",result);
            printf("\n");
    }
}
