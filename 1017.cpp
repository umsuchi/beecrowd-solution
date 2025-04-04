#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int h , sp;
    cin >> h >> sp;

    double d = h * sp;
    double f = d/12;

    cout << fixed << setprecision(3) << f << endl;

    return 0;
}