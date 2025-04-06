#include<iostream>
using namespace std;

int main()
{
    int n , c ;

    for(int i = 0 ; i<6 ; i++){
        cin >> n ;
        if(n > 0)
            c++;
    }

    cout << c << " valores positivos" << endl ;
    
    return 0;
}