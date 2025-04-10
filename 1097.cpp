#include <iostream>
using namespace std;

int main()
{
    int i = 1 , j , k = 7 , l = 5 ;

    while(i <= 9){
        for (j = k; j >= l ; j--){
            cout << "I=" << i << " J=" << j << endl;
        }
        k += 2;
        l += 2;
        i += 2;
    }

    return 0 ;
}