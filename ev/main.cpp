#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Vvedite masti" << endl;
    cout << "1: Pika" << endl;
    cout << "2: Tref" << endl;
    cout << "3: Bubna" << endl;
    cout << "4: Cirva" << endl << endl;
    cin >> m;

    int n;
    cout << "Vvedite dostoinstvo" << endl;
    cout << "11: Valet" << endl;
    cout << "12: Dama" << endl;
    cout << "13: Koroli" << endl;
    cout << "14: Tuz" << endl << endl;
    cin >> n;

    if ((m == 1) && (n == 11)){
            cout << "Pikovyi valet" << endl;
        }

    if ((m == 1) && (n == 12)){
            cout << "Pikovaia dama" << endl;
        }

    if ((m == 1) && (n == 13)){
            cout << "Pikovyi koroli" << endl;
        }

    if ((m == 1) && (n == 14)){
            cout << "Pikovyi tuz" << endl;
        }

    if ((m == 2) && (n == 11)){
            cout << "Trefovyi valet" << endl;
        }

    if ((m == 2) && (n == 12)){
            cout << "Trefovaia dama" << endl;
        }

    if ((m == 2) && (n == 13)){
            cout << "Trefovyi koroli" << endl;
        }

    if ((m == 2) && (n == 14)){
            cout << "Trefovyi tuz" << endl;
        }

    if ((m == 3) && (n == 11)){
            cout << "Bubnovyi valet" << endl;
        }

    if ((m == 3) && (n == 12)){
            cout << "Bubnovaia dama" << endl;
        }

    if ((m == 3) && (n == 13)){
            cout << "Bubnovyi koroli" << endl;
        }

    if ((m == 3) && (n == 14)){
            cout << "Bubnovyi tuz" << endl;
        }

    if ((m == 4) && (n == 11)){
            cout << "Cirvovyi valet" << endl;
        }

    if ((m == 4) && (n == 12)){
            cout << "Cirvovaia dama" << endl;
        }

    if ((m == 4) && (n == 13)){
            cout << "Cirvovyi koroli" << endl;
        }

    if ((m == 4) && (n == 14)){
            cout << "Cirvovyi tuz" << endl;
        }
}
