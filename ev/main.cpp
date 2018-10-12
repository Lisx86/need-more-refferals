#include <iostream>
using namespace std;
int main()
{
    int x1, y1;
    int x2, y2;
    int x3, y3;
    cout << "Vvedite koordinati pervoi versini preamougolinica : " << endl;
    cin >> x1 >> y1;
    cout << "Vvedite koordinati vtoroi versini preamougolinica : " << endl;
    cin >> x2 >> y2;
    cout << "Vvedite koordinati tretiei versini preamougolinica : " << endl;
    cin >> x3 >> y3;

    if ((x2 == x3) && (y1 == y2)){
        int x4, y4;
        x4 = x1;
        y4 = y3;
        cout << "Koordinati 4etvertoi versini preamougolinica : (" << x4 << "," << y4 << ")"  << endl;
    }
}
