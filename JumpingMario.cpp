#include <iostream>
using namespace std;
int main()
{
    int T,c=1,N,i,j,high,low;
    int arr[50];
    cin>>T;
    while(T--){
        high=0;
        low=0;
        cin >> N;
            for (i=0;i<N;i++)
            {
                cin >> arr[i];
            }

            for(j=0;j<N-1;j++)
            {
            if (arr[j]>arr[j+1])
                {low++;}
            else if (arr[j]<arr[j+1])
                {high++;}
            else if (N==1)
                {high=0;low=0;}
            }
        cout<<"Case " <<c<<": "<<high<<" "<<low<<endl;
        c++;
        }
     }
