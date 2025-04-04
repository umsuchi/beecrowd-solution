#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double r ,s , pi = 3.14159;
    cin >> r;

    s = (4/3.0) * pi * r * r * r;

    cout << "VOLUME = " << fixed << setprecision(3) << s << endl;

    return 0 ;
}