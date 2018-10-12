#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Vvedite koordinati to4ki : " << endl;
    cin >> x;
    cin >> y;

    if ((x == 0) && (y == 0)) {
        cout << endl << "0" << endl;
    }

    if (((x == 0) && (y != 0)) || ((x != 0) && (y == 0))) {
        cout << endl << "2" << endl;
    }

    if ((x != 0) && (y != 0)) {
        cout << endl << "3" << endl;
    }
}
