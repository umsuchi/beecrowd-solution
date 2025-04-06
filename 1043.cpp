#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a , b , c;
    cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a)
        cout << "Perimetro = " << fixed << setprecision(1) << a + b + c << endl;

    else
    {
        float d  = 0.5 * (a + b) * c;
        cout << "Area = " << fixed << setprecision(1) << d << endl;
    }

    return 0;
}