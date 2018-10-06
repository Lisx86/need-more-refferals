#include <iostream>
using namespace std;
int main()
{
    float n;
    cout << "Vvedite tsenu 1 kg konfet" << endl;
    cin >> n;

    for (int k = 1; k <= 10; k++){
        float x = n * k;
        cout << k << " kg = " << x << " leev" << endl;
    }
}
