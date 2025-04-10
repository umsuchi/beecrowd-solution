#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a , d = 0, c = 0;
    while (1){
        if(d == 2) break;

        cin >> a;
        if(a >= 0 && a <= 10){
            d++;
            c += a;
        }

        else  
            cout << "nota invalida" << endl;
    } 

    cout << "media = " << fixed << setprecision(2) << c / 2.00 << endl;
 
    return 0;
}