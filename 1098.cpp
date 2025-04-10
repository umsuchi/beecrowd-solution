#include <iostream>
using namespace std;

int main()
{
    float i = 0 , k = 1 , l = 3 , j ;

    while(i <= 2.01){
        for (j = k; j <= l ; j++){
            cout << "I=" << i << " J=" << j  + i << endl;
        }
        
        i += 0.2;
    }

    return 0 ;
}