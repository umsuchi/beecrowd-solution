#include <iostream>
using namespace std;

int main()
{
    int a , b , t = 0 , s = 0;
    cin >> a >> b;

    while(b <= a) cin >> b;

    for(int i = a ; s <= b ; i++){
        s += i; 
        t++;
    }

    cout << t << endl;

    return 0;
}