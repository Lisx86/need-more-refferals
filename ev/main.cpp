#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Vvedite god : " << endl;
    cin >> x;

    if ((x % 4 == 0) && (x % 100 != 0) && (x % 400 == 0)){
        cout << x << " Visokosnii god i v nem 366 dnei" << endl;
    }
    if ((x % 100 == 0) && (x % 400 != 0)){
        cout << x << " Nevisokosnii god i v nem 365 dnei" << endl;
    }

    else {
        cout << x << " Nevisokosnii god i v nem 365 dnei" << endl;\
    }

}
