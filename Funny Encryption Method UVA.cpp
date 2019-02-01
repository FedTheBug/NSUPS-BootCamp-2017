#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,N,M,test,x;
    cin >> test;
    while (test--)
    {
        cin >> N;
        M=N;
        a = 0;
         b = 0;
        while (M>0)
        {
            a = a+ M%2;
            M = M/2;
        }

        while (N>0)
        {
            x = N%10;
            if (x==1||x==2||x==4||x==8)
                b++;
            else if (x==3||x==5||x==6||x==9)
                b = b+2;
            else if (x==7)
                b = b+3;
            N = N/10;
        }
        cout << a << " " << b << endl;
    }
}

/*#include<stdio.h>
int main()
{
    int n,m,a,b,i,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        m=n;
        a=0;
        while(m>0)
        {
            a+=m%2;
            m/=2;
        }

        b=0;
        while(n>0)
        {
            i=n%10;
            if(i==1||i==2||i==4||i==8)
                b++;
            else if(i==3||i==5||i==6||i==9)
                b+=2;
            else if(i==7)
                b+=3;
            n/=10;
        }
        printf("%d %d\n",a,b);
    }
    return 0;
}
*/
