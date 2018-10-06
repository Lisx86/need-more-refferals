#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Vvedite cislo :" << endl;
    cin >> x;

    if (x / 100 == 1) {
        cout << "Sto ";
    }

    if (x / 100 == 2) {
        cout << "Dvesti ";
    }

    if (x / 100 == 3) {
        cout << "Trista ";
    }

    if (x / 100 == 4) {
        cout << "Cetyresta ";
    }

    if (x / 100 == 5) {
        cout << "Pyatisot ";
    }

    if (x / 100 == 6) {
        cout << "Sestisot ";
    }

    if (x / 100 == 7) {
        cout << "Semisot ";
    }

    if (x / 100 == 8) {
        cout << "Vosemisot ";
    }

    if (x / 100 == 9) {
        cout << "Devyatisot ";
    }

    if (x % 100 == 0) {
        cout << " ";
    }

    if (x % 100 == 10) {
        cout << "Desyati " << endl;
        return 0;
    }

    if (x % 100 == 11) {
        cout << "Odinnadtati " << endl;
        return 0;
    }

    if (x % 100 == 12) {
        cout << "Dvenadtati " << endl;
        return 0;
    }

    if (x % 100 == 13) {
        cout << "Trinadtati " << endl;
        return 0;
    }

    if (x % 100 == 14) {
        cout << "Cetyrnadtati " << endl;
        return 0;
    }

    if (x % 100 == 15) {
        cout << "Pyatnadtati " << endl;
        return 0;
    }

    if (x % 100 == 16) {
        cout << "Sestnadtati " << endl;
        return 0;
    }

    if (x % 100 == 17) {
        cout << "Semnadtati " << endl;
        return 0;
    }

    if (x % 100 == 18) {
        cout << "Vosemnadtati " << endl;
        return 0;
    }

    if (x % 100 == 19) {
        cout << "Devyatnadtati " << endl;
        return 0;
    }

    if ((x % 100 / 10) == 2) {
        cout <<"dvadtati ";
    }

    if ((x % 100 / 10) == 3) {
        cout <<"tridtati ";
    }

    if ((x % 100 / 10) == 4) {
        cout <<"sorok ";
    }

    if ((x % 100 / 10) == 5) {
        cout <<"pyatidesyat ";
    }

    if ((x % 100 / 10) == 6) {
        cout <<"sestidesyat ";
    }

    if ((x % 100 / 10) == 7) {
        cout <<"semidesyat ";
    }

    if ((x % 100 / 10) == 8) {
        cout <<"vosemidesyat ";
    }

    if ((x % 100 / 10) == 9) {
        cout <<"devyanosto ";
    }

        if (x % 10 == 1) {
            cout << "odin" << endl;
        }

        if (x % 10 == 2) {
            cout << "dva" << endl;
        }

        if (x % 10 == 3) {
            cout << "tri" << endl;
        }

        if (x % 10 == 4) {
            cout << "cetyre" << endl;
        }

        if (x % 10 == 5) {
            cout << "pyati" << endl;
        }

        if (x % 10 == 6) {
            cout << "sesti" << endl;
        }

        if (x % 10 == 7) {
            cout << "semi" << endl;
        }

        if (x % 10 == 8) {
            cout << "vosemi" << endl;
        }

        if (x % 10 == 9) {
            cout << "devyati" << endl;
        }
}
