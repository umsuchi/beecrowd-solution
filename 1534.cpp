#include <iostream>
using namespace std;

int main()
{
    int n; 
    while(cin >> n){
        
        int mat[n][n];
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n; j++){
                
                if(j == n - i - 1) mat[i][j] = 2;
                else if(i == j) mat[i][j] = 1;
                else mat[i][j] = 3;
                
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n; j++){
                cout << mat[i][j];
            }
            cout << endl;
        }

       
    }

    return 0;
}