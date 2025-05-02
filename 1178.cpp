#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n;
    cin >> n;

    for(int i = 0 ; i < 100 ; i++){
        
        cout << fixed << setprecision(4) << "N[" << i << "] = " << n << endl;
        n /= 2;
    }

    return 0;
}