#include <iostream>
using namespace std;

int main()
{
    int a , b , c, n , m;
    cin >> a >> b >> c ;

    n = (a > b) ? a : b;
    m = (n > c) ? n : c;

    cout << m << " eh o maior" << endl;

    return 0;
}