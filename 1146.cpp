#include <iostream>
using namespace std;

int main()
{
    int x ;

    while (1){
        int i = 1;
        cin >> x;
        if(x == 0) break;
        while(i <= x){
            cout << i ;
            cout << ((i == x) ? "\n" : " ");
            i++;
        }
    }

    return 0;
}