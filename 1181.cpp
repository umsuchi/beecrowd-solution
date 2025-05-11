#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n , arr[12][12];
    cin >> n;
    char a ;
    cin >> a;

    double sum = 0;

    for(int i = 0 ; i < 12 ; i++){
        for(int j = 0 ; j < 12 ; j++)
            cin >> arr[i][j];
    }

    for(int i = 0 ; i < 12 ; i++) sum += arr[int(n)][i];

    if(a == 'S') cout << fixed << setprecision(1) << sum << endl;

    else cout << fixed << setprecision(1) << sum / 12 << endl;

    return 0;
}