#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int c, numou;
    double pri , bill;

    cin >> c >> numou;
    cin >> pri;

    bill = numou * pri;

    cin >> c >> numou;
    cin >> pri;

    bill += numou * pri;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << bill << endl; 

    return 0 ;
}