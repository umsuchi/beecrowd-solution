#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a , b , c;
    while(1){
        cin >> a >> b >> c;
        if(a == 0) break;
        int area = a * b;
        int required = area * 100 / c;
        cout << (int)sqrt(required) << endl;
    }

    return 0;
}