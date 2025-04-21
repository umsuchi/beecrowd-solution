#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        int a , b , sum = 0;
        cin >> a >> b;
        for(int j = 0 ; j < b ; j++){
            if(a & 1) sum += a;
            else sum += (a + 1);
            a += 2;
        }

        cout << sum << endl;
    }

    return 0;
}