#include <iostream>
using namespace std;

int main()
{
    cout << "MUITO OBRIGADO" << endl;

    int n;
    int a = 0 , g = 0 , d = 0;

    while(1){
        cin >> n;
        switch (n){
            case 1:
                a++;
                break;

            case 2:
                g++;
                break;

            case 3:
                d++;
                break;
        }
        if(n == 4) break;
    }

    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;

    return 0;
}