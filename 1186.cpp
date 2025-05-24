#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char c;
    cin >> c;
    int count = 0;
    double m[12][12] , s = 0;
    for(int i = 0 ; i < 12 ; i++){
        for(int j = 0 ; j < 12 ; j++){
            cin >> m[i][j];
            if(j > 11 - i) s += m[i][j] , count++;
        }
    }

    if(c == 'S') cout << fixed << setprecision(1) << s << endl;

    else cout << fixed << setprecision(1) << s / count << endl;

    return 0;
}