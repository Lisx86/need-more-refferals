#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Vvedite n : " << endl;
    cin >> n;

    float f;
    float x;
    for (int i = 1; i <= n; i++){
        f = i*(i+1);
        x = 1 + 1/f;
    }
    cout << x <<  endl;
}
