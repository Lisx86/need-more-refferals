#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Vvedite x : " << endl;
    cin >> x;

    if ((x < -2) || (x > 2)){
        int fx = 2 * x;
        cout << "fx = " << fx << endl;
    }
    else {
        int fx = -3 * x;
        cout << "fx = " << fx << endl;
    }
}
