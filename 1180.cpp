#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0 ; i<n; i++) cin >> a[i] ;
    
    int m = __INT_MAX__ , loc = 0;
    for(int i = 0 ; i < n ; i++){
        m = (a[i] < m) ? a[i] : m;
        loc = (a[i] <= m) ? i : loc; 
    }

    cout << "Menor valor: " << m << "\nPosicao: " << loc << endl;

    return 0;
}