#include <iostream>
using namespace std;
int main()
{
    int i,x,n,j;
    cin >> n;
    if((1 <= n && n<= 500000))
    {
        for(i=0;i<n;i++)
        {
            int sum = 0;
            cin >> x;
            for(j=1;j<=x/2;j++)
            {
                if(x%j==0){
                sum =sum +j;

                }

            }
            cout << sum << endl;


        }
    }
}
