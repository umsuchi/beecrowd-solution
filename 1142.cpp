#include <iostream>
using namespace std;

int main()
{
    int a = 1 , b = 2 , c = 3;
    int n ;
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << a << " " << b << " "  << c << " PUM" << endl;
        a = c + 2;
        b = a + 1;
        c = b + 1;
    }

    return 0;
}