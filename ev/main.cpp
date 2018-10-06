#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    cout << "Vvedite storonu treugolinica: ";
    cin >> a;

    int r1 = a*sqrt(3)/6;
    int r2 = 2*r1;
    int s = a*a*sqrt(3)/4;

    int x;
    cout << "Vyberite deistvie: 1, 2, 3, 4" << endl;
    cin >> x;

switch(x){
case 1:
    {
        cout << "Storona treugolinica = " << a << endl;
        cout << "Radius vpisannoi okrujnosti = " << r1 << endl;
        cout << "Radius opisannoi okrujnosti = " << r2 << endl;
        cout << "Ploseadi treugolinica = " << s << endl;
         break;
    }

case 2:
    {
        cout << "Radius vpisannoi okrujnosti = " << r1 << endl;
        cout << "Radius opisannoi okrujnosti = " << r2 << endl;
        cout << "Ploseadi treugolinica = " << s << endl;
         break;
    }

case 3:
    {
        cout << "Radius opisannoi okrujnosti = " << r2 << endl;
        cout << "Ploseadi treugolinica = " << s << endl;
         break;
    }

case 4:
    {
         cout << "Ploseadi treugolinica = " << s << endl;
          break;
    }
default:
    cout << "Vy vveli nevernoe znacenie" << endl;
}
}
