#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while(1){
        cin >> n;
        if(n == 0) break;
        long mat[15][15];
        for(int i = 0 ; i < n ; i++){
            long p = pow(2 , i);
            for(int j = 0 ; j < n ; j++){
                mat[i][j] = p;
                p *= 2;
            }
        }
        int w = log10(mat[n - 1][n - 1]) + 1;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cout << setw(w) << mat[i][j];
                if(j < n - 1) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}