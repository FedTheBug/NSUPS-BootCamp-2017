#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void Merge(int *A,int *L,int leftcounts,int *R,int rightcounts)
{
    int i,j,k;
    i=0;j=0;k=0;
    while(i<leftcounts && j<rightcounts)
    {
        if(L[i]<R[j]) A[k++] = L[i++];
        else A[k++] = R[j++];
    }
    while(i<leftcounts) {A[k++] = L[i++];}
    while(j<rightcounts) {A[k++] = R[j++];}

}
void Mergesort(int *A,int n)
{
    int mid,i,*L,*R;
    if(n<2) return;
    mid = n/2;
    L = new int [mid];
    //L = (int*)malloc(mid*sizeof(int));
    //R = (int*)malloc((n-mid)*sizeof(int));
    R = new int [n-mid];
    for(i=0;i<mid;i++){ L[i] = A[i];}
    for(i=mid;i<n;i++) {R[i-mid] = A[i];}
    Mergesort(L,mid);
    Mergesort(R,n-mid);
    Merge(A,L,mid,R,n-mid);
    //delete(L);
    //delete(R);

}
int main()
{
    int A[] = {2,4,1,6,8,5,3,7};
    int numberofelements;
    numberofelements = sizeof(A)/sizeof(A[0]);
    Mergesort(A,numberofelements);
    for(int i = 0;i<numberofelements;i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
