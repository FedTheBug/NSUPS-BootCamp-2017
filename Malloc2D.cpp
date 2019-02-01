#include <iostream>
using namespace std;
int main(){
    int **A = new int *[3];
    int i,j,sum=0;
    for (i=0;i<3;i++){
        A[i] = new int[3];
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin >> A[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j)
                sum = sum+A[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout << A[i][j] << " ";

        }
        cout << endl;
    }
    cout << "\nSum is " << sum << endl;
    for(i=0;i<3;i++){
     delete[] A[i];
    }
    return 0;
}
