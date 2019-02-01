#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N,i,j,k,flag,counter,first,second;
    int arr[15];
    //cin >> N;

    while ((scanf("%d",&N)==1)){
    for(j=1;j<=N;j++){

    for(i=1;i<=10;i++){
        cin >> arr[i];
    }
    first=arr[1];
    second =arr[2];
    flag = 0;
    counter = 0;
    if (j==1) cout << "Lumberjacks:"<<endl;
    if(second>first)

        for(k = 1;k<10;k++)
        {
            if(arr[k+1]>arr[k])
                flag++;

                else break;
        }


    else if (first>second)

        for(k = 1;k<10;k++)
        {
            if(arr[k]>arr[k+1])
                counter++;

            else break;
        }




    if(flag==9||counter==9) cout << "Ordered" <<endl;
    else cout << "Unordered" <<endl;

            }
}
}
