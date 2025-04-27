#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for(int i = 0 ; i < 100 ; i++){
        double n ;
        cin >> n;
        if(n <= 10) cout << fixed << setprecision(1) << "A[" << i << "] = " << n << endl;
    }

    return 0;
}