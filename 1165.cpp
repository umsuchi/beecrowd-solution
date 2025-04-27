#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;

    for(int i = 0 ; i < n; i++){
        int a , c = 0;
        cin >> a;

        for(int j = 2; j <= a / 2; j++) if(a % j == 0) c++;
        
        if(c == 0) cout << a << " eh primo" << endl;
        else cout << a << " nao eh primo" << endl;
    }

    return 0;
}