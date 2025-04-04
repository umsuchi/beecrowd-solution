#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b , c , tri , cir , tra, squ, rec;
    double pi = 3.14159;

    cin >> a >> b >> c ;

    tri = 0.5 * a * c;
    cir = pi * c * c;
    tra = 0.5 * (a + b) * c;
    squ = b * b;
    rec = a * b;

    cout << "TRIANGULO: " << fixed << setprecision(3) << tri << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << cir << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << tra << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << squ << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << rec << endl;


    return 0 ;
}