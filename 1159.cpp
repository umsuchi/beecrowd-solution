#include <iostream>
using namespace std;

int main()
{
    int n ;
    while (1){
        cin >> n;
        if( n == 0 ) break;
        if(n % 2 != 0) n++ ;
        
        int s = 0;
        for(int i = 0; i < 5 ; i++){
            s += n;
            n += 2;
        }

        cout << s << endl;
    }

    return 0;
}