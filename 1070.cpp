#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;

    for(int i = 0 ; i< 6 ; i++){
        
        if(n % 2 == 0){
            n++;
        }
       
        cout << n << endl;
        n += 2;
    }
    
    return 0;
}