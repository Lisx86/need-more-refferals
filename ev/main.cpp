#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Vvedite cislo" << endl;
    cin >> a;
    int b;
    cout << "Vvedite cislo" << endl;
    cin >> b;

    int k = 0;
    for (int i = a; i <= b; i++){
        cout << i << ", ";
        k++;
    }
    cout << endl << endl << k << " cisla" ;
}
