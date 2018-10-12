#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x;
    cout << "Vvedite x : " << endl;
    cin >> x;

    if (x > 0){
        float fx = 2 * sin(x);
        cout << "fx = " << fx << endl;
    }

    if (x <= 0){
        float fx = 6 - x;
        cout << "fx = " << fx <<
        endl;
    }
}
