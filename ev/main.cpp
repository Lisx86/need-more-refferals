#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Vvedite a: " << endl;
    cin >> a;
    cout << "Vvedite b: " << endl;
    cin >> b;

    if (a > b) {
        float c = a;
        a = b;
        cout << a << " : naimenisee znacenie" << endl;
        cout << c << " : naibolisee znacenie" << endl;

    }
}
