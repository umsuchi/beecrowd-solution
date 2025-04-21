#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double s = 1 , c = 1;

    for(double i = 3 ; i < 40; i += 2){
        c += c;
        s += i / c ;
    }

    cout << fixed << setprecision(2) << s << endl;

    return 0;
}