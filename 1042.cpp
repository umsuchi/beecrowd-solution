#include <iostream>
using namespace std;

int main()
{
    int a, b , c;
    int h[3];
    cin >> a >> b >> c;
    
    h[0] = a;
    h[1] = b;
    h[2] = c;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(h[i]<h[j])
              
                swap(h[i] , h[j]);
            
        }
    }

    cout << h[0] << endl << h[1] << endl << h[2] << endl;
    cout << endl;
    cout << a << endl << b << endl << c << endl;

    return 0;
}