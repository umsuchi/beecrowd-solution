#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double n , ave = 0;
    int c = 0 ;

    for(int i = 0 ; i<6 ; i++){
        cin >> n ;

        if(n > 0){
            c++;
            ave += n;
        }
    }

    cout << c << " valores positivos" << endl ;
    cout << fixed << setprecision(2) << ave/c << endl;
    
    return 0;
}