#include <iostream>
using namespace std;

int main()
{
    int x , y;
    cin >> x >> y;

    int i = 1 , n = 1;

    while(i <= y){
        if(n == x) {
            cout << i << "\n";
            n = 1;
            i++;
       }

       else{
            cout << i << " ";
            n++;
            i++;
       }
    }

    return 0;
}