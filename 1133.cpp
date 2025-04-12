#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cin >> a >> b;

    int m = max(a , b);
    int n = min(a , b);

    for(int i = n + 1; i < m ; i++){
        if(i % 5 == 2 || i % 5 == 3)
            cout << i << endl;
    }

    return 0;
}