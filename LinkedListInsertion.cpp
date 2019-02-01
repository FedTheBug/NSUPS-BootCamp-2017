#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* Head;
void Insert()
{

}

int main ()
{
    Head = NULL;
    int n,i,x;
    cout << "How many numbers?";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout << "Enter the number";
        cin>>x;
        Insert(x);
        print (x);
    }
}

