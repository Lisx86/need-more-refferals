#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Vvedite cislo n : " << endl;
    cin >> n;

    float s = 0;
    for (int i = 1; i <= n; i++){
        s += pow(i, i);
    }
    cout << s << endl;
}
