#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    cout << "Vvedite cislo" << endl;
    cin >> a;

    int b;
    cout << "Vvedite cislo" << endl;
    cin >> b;

    int s = a;
    for (int i = a; i <= b; i++){
            int x = sqrt(i);
        if (x - int(x) == 0) {
                cout << x << endl;
            s = s + i;

        }
    }
      // cout << s;
}

