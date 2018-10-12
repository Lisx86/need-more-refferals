#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Vvedite cislo : " << endl;
    cin >> x;

    if (x == 0) {
        cout << x << " nulevoe cislo" << endl;
    }

    if ((x > 0) && (x % 2 != 0)) {
        cout << x << " polojitelinoe necetnoe cislo" << endl;
    }

    if ((x < 0) && (x %2 == 0)){
        cout << x << " otritatelinoe cetnoe cislo" << endl;
    }

    if ((x > 0) && (x % 2 == 0)) {
        cout << x << " polojitelinoe cetnoe cislo" << endl;
    }

    if ((x < 0) && (x %2 != 0)){
        cout << x << " otritatelinoe necetnoe cislo" << endl;
    }
}
