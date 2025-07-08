#include <iostream>
using namespace std;

int main()
{
    long long int n , m;
    while(cin >> n >> m){
        
        m = (m == 0) ? 1 : m;
        n = (n == 0) ? 1 : n;
        if(n > 0) for(int i = n - 1 ; i >= 2 ; i--) n *= i; 
        if(m > 0) for(int i = m - 1; i >= 2 ; i--) m *= i;
        cout << m + n << endl;
    }

    return 0;
}