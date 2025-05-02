#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        long x , a = 0 , b = 1;
        cin >> x;

        for(int j = 2 ; j <= 60 ; j++){

            if(x == 0) {cout << "Fib(0) = 0" << endl; break;}
            if(x == 1) {cout << "Fib(1) = 1" << endl; break;}

            long tem = a + b;
            a = b ;
            b = tem;

            if(j == x) {cout << "Fib(" << j << ") = " << b << endl; break;}

        }
    }

    return 0;
}