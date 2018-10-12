#include <iostream>
using namespace std;
int main()
{
    float x;
    cout << "Vvedite x : " << endl;
    cin >> x;

    if (x < 0) {
        int fx = 0;
        cout << "fx = " << fx << endl;
    }

    int fx = 0;
    for (int x = 0; x <= 100; x++){
        if (x % 2 == 0){
                fx = 1;
        }
    }
    cout << "fx = " << fx << endl;
 }

