#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a , b;
    float d;
    cin >> a;

    cout << "NUMBER = " << a << endl;

    cin >> b >> d ;

    cout << "SALARY = U$ " << fixed << setprecision(2) << b*d << endl;

    return 0;
}