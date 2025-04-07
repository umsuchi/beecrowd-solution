#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n ;
    cin >> n;
   
    int c = 0 , r = 0 , s = 0;
    int total = 0;

    for(int i = 0 ; i < n ; i++){
        int nn;
        cin >> nn;
        char a ;
        cin >> a;

        total += nn;

        switch(a){
            case 'C' :
                c += nn;
                break;
            case 'R' :
                r += nn;
                break;
            case 'S' :
                s += nn;
                break;
        }
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << (float) (c * 100) / total << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << (float)(r * 100) / total << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << (float)(s * 100) / total << " %" << endl;
    
    return 0;
}