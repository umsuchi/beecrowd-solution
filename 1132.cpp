#include <iostream>
using namespace std;

int main()
{
    int a , b ;
    int sum = 0;
    cin >> a >> b;

    int c;
    if(a > b){
        c = b;
        b = a;
        a = c;
    }

    for(int i = a ; i <= b ; i++){
        if(i % 13 != 0) 
            sum += i;
    }

    cout << sum << endl;

    return 0;
}