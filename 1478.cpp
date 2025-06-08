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
        int a = 0;
        for(int i = 0 ; i < n ; i++){
            int m = i + 1, k = 2;
            for(int j = 0 ; j <= i ; j++)
                mat[i][j] = m--;
            for(int j = i + 1 ; j < n ; j++) 
                mat[i][j] = k++;
            
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