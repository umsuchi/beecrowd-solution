#include <iostream>
using namespace std;

int main() {
 
    int n;
    cin >> n;

    int y = n/365;
    int n1 = n%365;

    cout << y << " ano(s)" << endl;
    
    int m = n1/30;
    int d = n1%30;
    
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
   
    return 0;
}