#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int a[n][n];
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                a[i][j] = 0;
                if(i == j) a[i][j] = 2;
                if(j == (n - 1 - i)) a[i][j] = 3;
                
                if(i >= n / 3 && i < n - n / 3 && j >= n / 3 && j < n - n / 3) a[i][j] = 1;
                if(i == n / 2 && j == n / 2) a[i][j] = 4;
               
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++) cout << a[i][j];
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}