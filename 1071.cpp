#include<iostream>
using namespace std;

int main()
{
    int a, b , sum = 0; 
    cin >> a >> b;

    int min = (a < b) ? a:b ;
    int max = (a > b) ? a:b ;

    for(int i = min +1 ; i < max ; i++){
        if(i % 2 != 0)
            sum += i;
    }

    cout << sum << endl ;
    
    return 0 ;
}