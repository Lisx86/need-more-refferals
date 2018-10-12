#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3;
    cout << "Vvedite koordinati to4ki A : " << endl;
    cin >> x1;
    cout << "Vvedite koordinati to4ki B: " << endl;
    cin >> x2;
    cout << "Vvedite koordinati to4ki C: " << endl;
    cin >> x3;

    if ((x2 > x3) && (x2 < x1) || (x2 > x1)) {
        cout << "To4ka C (" << x3 <<") Nahoditsea blije k to4ke A" << endl;
        int r = x3 - x1;
        cout << "Rasstoianie ot to4ki C do to4ki A = " << r;
    }
    else {
        cout << "To4ka B (" << x2 <<") Nahoditsea blije k to4ke A" << endl;
        int r = x2 - x1;
         cout << "Rasstoianie ot to4ki B do to4ki A = " << r;
    }
}
