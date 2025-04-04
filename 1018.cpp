#include <iostream>
using namespace std;

int main() {
 
    int N;
    cin >> N;

    cout << N << endl;
    
    int n100=N/100;
    int a = N%100;

    cout << n100 << " nota(s) de R$ 100,00" << endl;

    int n50 = a/50;
    int b = a%50;

    cout << n50 << " nota(s) de R$ 50,00" << endl;
    
    int n20 = b/20;
    int c = b%20;

    cout << n20 << " nota(s) de R$ 20,00" << endl;
    
    int n10 = c/10;
    int d = c%10;

    cout << n10 << " nota(s) de R$ 10,00" << endl;
    
    int n5= d/5;
    int e = d%5;

    cout << n5 << " nota(s) de R$ 5,00" << endl;
    
    int n2 = e/2;
    int f = e%2;

    cout << n2 << " nota(s) de R$ 2,00" << endl;
   
    int n1 = f;
    //int j = f%1;
   
    cout << n1 << " nota(s) de R$ 1,00" << endl; 
    
    return 0;
}