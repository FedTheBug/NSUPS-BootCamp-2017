#include <iostream>
using namespace std;
struct rectangle
{
    float length;
    float width;
    float area;
};
int main ()
{
    struct rectangle Rect;
    Rect.length = 12.5;
    Rect.width = 6.5;
    Rect.area = Rect.length*Rect.width;
    struct rectangle *P;
    P = &Rect;
    cout << "\nLength: " << P->length;
    cout << "\nWidth: " << P->width;
    cout << "\nArea:" << P->area;
}
