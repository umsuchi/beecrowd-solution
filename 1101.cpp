#include <iostream>
using namespace std;

int main()
{
    while (1){
        int m , n ;
        cin >> m >> n;
        if(m <= 0) break;
        if(n <= 0) break;

        int  sum = 0;

        if(m > n){
            for(int i = n ; i<=m ; i++){
                cout << i << " " ;
                sum += i;
            }
            cout << "Sum=" << sum << endl;
        }

        

        else if(m < n){
            for(int i = m ; i<=n ; i++){
                cout << i << " " ;
                sum += i;
            }
            cout << "Sum=" << sum << endl;
        }

        
    }
        
    return 0;
}