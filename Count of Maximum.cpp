#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[100],t,n,c,i,j,m,elem,item;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for ( i = 0; i < n ; i++)
        {
            cin >> arr[i];
        }
        m = 0;
        for (i=0;i<n;i++)
        {
            item = arr[i];
            c = 0;
            for (j = 0;j<n;j++)
            {
                if (item == arr[j])
                    c++;
            }
            if (c>m)
            {
                m = c;
                elem = item;
            }
            else if(c==m)
            {
                if (elem>item)
                    elem=item;
            }
        }
        cout << elem << " " << m << endl;
    }

}
