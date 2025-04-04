#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin  >> n ;

    int h = n / 3600;
    int n1 = n % 3600;
    
    int m = n1 / 60;
    int n2 = n1 % 60;

    int s = n2;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}