#include <iostream>
using namespace std;
int main()
{
    float x;
    cout << "Vvedite x : " << endl;
    cin >> x;

    if (x <= 0){
        float fx = -x;
        cout << "fx = " << fx << endl;
    }

    if ((x > 0) && (x < 2)) {
        float fx = x*x;
        cout << "fx = " << fx << endl;
    }

    if (x >= 2) {
        float fx = 4;
        cout << "fx = " << fx << endl;
    }
}
