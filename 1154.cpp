#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n , sum = 0 , t = 0;
    cin >> n;
    while(n > 0) {
        sum += n;
        t++;
        cin >> n;
    }

    cout << fixed << setprecision(2) << (float) sum / t << endl;

    return 0;
}