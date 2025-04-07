#include <iostream>
using namespace std;

int main()
{
    int m = 0 , p;

    for(int i = 1 ; i <= 100 ; i++){
        int n;
        cin >> n; 

        if(n > m){
            m = n;
            p = i;
        }

    }

    cout << m << endl << p << endl;

    return 0;
}