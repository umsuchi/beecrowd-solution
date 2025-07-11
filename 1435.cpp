#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    while(1){
        cin >> n;
        if(n == 0) break;
        int mat[n][n];

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                int a = min(i , j);
                int b = min(n - i - 1 , n - j - 1);
                
                mat[i][j] = min(a , b ) + 1;
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cout << setw(3) << mat[i][j];
                if(j < n - 1) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}