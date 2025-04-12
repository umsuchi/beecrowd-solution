#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;

    for (int i = 1 ; i <= n ; i++){
        int c = i*i;
        cout << i << " " << c << " " << c*i << endl;
        cout << i << " " << c + 1 << " " << c*i + 1 << endl;
    }
    
    return 0;
}