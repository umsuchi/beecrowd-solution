#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int v = -1;

    while (v != 2)
    {
        double t = 0 , x , b , sum = 0;
        while (t < 2){
            cin >> x ;
            if(x >= 0 && x <= 10){
                sum += x;
                t++;
            }
            else    
                cout << "nota invalida" << endl;
        }
        cout << "media = " << fixed << setprecision(2) << sum / 2 << endl;
        do{
            cout << "novo calculo (1-sim 2-nao)" << endl;
        }while((cin >> v) && v != 2 && v != 1);
    }

    return 0;
}