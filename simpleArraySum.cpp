#include <iostream>
using namespace std;
int simpleArraySum(int arr[],int n)
{
    int sum = 0;
    for (int i=1;i<=n;i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
     int arr[50];
     int n;
     cin >> n;
     for(int i=1;i<=n;i++)
     {
         cin >> arr[i];
     }
     cout << simpleArraySum(arr,n) << endl;
}
