#include <iostream>
using namespace std;

int main()
{
    int a, b, c ,d;
    cin >> a >> b >> c >> d;

    if(a > 0 && b > 0 && c > 0 && d > 0 && a%2 == 0 && (c + d > a + b ) && (b > c && d > a))
        cout << "Valores aceitos" << endl;
    else
        cout << "Valores nao aceitos" << endl;

    return 0;
}