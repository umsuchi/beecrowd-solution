#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x ;
    double y , a;

    cin >> x;
    cin >> y;

    a = x/y;

    cout << fixed << setprecision(3) << a << " km/l" << endl;

    return 0;
}