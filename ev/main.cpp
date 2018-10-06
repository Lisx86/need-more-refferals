#include <iostream>
using namespace std;
int main()
{
        int v;
        cout << "Vvedite vozrast : " << endl;
        cin >> v;

        if (v / 10 == 2){
            cout << "Twenty ";
            goto vozrast;
        }

        if (v / 10 == 3){
            cout << "Thirty ";
            goto vozrast;
        }

        if (v / 10 == 4){
            cout << "Forty ";
            goto vozrast;
        }

        if (v / 10 == 5){
            cout << "Fifty ";
            goto vozrast;
        }

        if (v / 10 == 6){
            cout << "Sixty ";
            goto vozrast;
        }

    vozrast:
        if (v % 10 == 0) {
            cout << " " << endl;
        }

        if (v % 10 == 1) {
            cout << "one" << endl;
        }

        if (v % 10 == 2) {
            cout << "two" << endl;
        }

        if (v % 10 == 3) {
            cout << "three" << endl;
        }

        if (v % 10 == 4) {
            cout << "four" << endl;
        }

        if (v % 10 == 5) {
            cout << "five" << endl;
        }

        if (v % 10 == 6) {
            cout << "six" << endl;
        }

        if (v % 10 == 7) {
            cout << "seven" << endl;
        }

        if (v % 10 == 8) {
            cout << "eight" << endl;
        }

        if (v % 10 == 9) {
            cout << "nine" << endl;
        }
}

