#include <iostream>
using namespace std;

int main()
{
    int a , b , c , d , e;
    cin >> a >> b >> c >> d;

    e = ((c * 60) + d) - ((a * 60) + b) ;

    if(e <= 0)
        e += 24 * 60;

    cout << "O JOGO DUROU " << e / 60 << " HORA(S) E " << e % 60 << " MINUTO(S)" << endl;

    return 0;
}