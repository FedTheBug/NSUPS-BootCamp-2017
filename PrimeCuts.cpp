#include <iostream>
using namespace std;

int main() {
    int n, c, i, j, p[1001] = {1}, pt = 1;
    for(i = 2; i < 1001; i++) {
        int counter = 0;
        for(j = 2; j*j <= i; j++) {
            if(i%j == 0) {
                counter = 1;
                break;
            }
        }
        if(!counter)
            p[pt++] = i;
    }
=    while((cin >> n )== 2 && (cin >> c == 2) {
       cout << n << c;
        int list[1001], lt = 0;
        for(i = 0; i < pt; i++) {
            if(p[i] <= n)
                list[lt++] = p[i];
            else
                break;
        }
        if(lt&1)    c = c*2-1;
        else        c = c*2;
        if(c > lt)  c = lt;
        for(i = lt/2-c/2, j = 0; j < c; j++, i++)
            (cout << list[i]);
        cout << "\n";
    }
    return 0;
}
