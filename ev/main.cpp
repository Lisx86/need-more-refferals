#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int k;
    cout << "Vvedite stepeni k : " << endl;
    cin >> k;

    float s = 0;
    for (int n = 1; n <= 100; n++){
        s += pow(n,k);
    }
    cout << s << " - summa" << endl;
}
