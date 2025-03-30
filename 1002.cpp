#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double pi = 3.14159 , a , r;
    cin >> r;

    a = pi*r*r;
    cout <<"A=" << setprecision(4) << a << endl;

    return 0;
}