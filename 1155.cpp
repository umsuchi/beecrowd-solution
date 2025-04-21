#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double s = 1;

    for(double i = 2 ; i <= 100 ; i++){
        s += 1 / i ; 
    }

    cout << fixed << setprecision(2) << s << endl;

    return 0;
}