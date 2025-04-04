#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double x1, y1, a, b;
    double x2, y2 ;

    cin  >> x1 >> y1 >> x2 >> y2;

    a = pow ((x2 - x1) , 2);
    b = pow ((y2 - y1) , 2);

    cout << fixed << setprecision(4) << sqrt(a + b) << endl;
    
    return 0;
}