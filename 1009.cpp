#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char a[50];
    double b, c;

    cin >> a;
    cin >> b >> c;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << b + (c*0.15) << endl;

    return 0;
}