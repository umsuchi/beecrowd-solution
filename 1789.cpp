#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int s = 0;

        for(int i = 0 ; i < n ; i++){
            int b;
            cin >> b;
            s = max(s , b);
        }
        if(s < 10) cout << 1 << endl;
        else if (s < 20) cout << 2 << endl;
        else cout << 3 << endl;
    }

    return 0;
}