#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Vvedite n : " << endl;
    cin >> n;

    float f;
    for (int i = 1; i <= n; i++){
        f = i*(i+1);
    }
    cout << f << " - factorial" << endl;
}
