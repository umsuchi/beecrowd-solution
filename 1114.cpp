#include <iostream>
using namespace std;

int main()
{
    long n;
    while(1){
        cin >> n;
        if(n == 2002){
            cout << "Acesso Permitido" << endl;
            break;
        }
        else 
            cout << "Senha Invalida" << endl;
    }

    return 0;
}