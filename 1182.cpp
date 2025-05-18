#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n ;
    float s = 0;
    cin >> n;
    char c ;
    cin >> c;

    float a[12][12];

    for(int i = 0 ; i < 12 ; i++){
        for(int j = 0 ; j < 12 ; j++){
            cin >> a[i][j];
            if(j == n) s += a[i][j];
        }
    }

    if(c == 'S') cout << fixed << setprecision(1) << s << endl; 
    else cout << fixed << setprecision(1) << s / 12 << endl;

    return 0;
}