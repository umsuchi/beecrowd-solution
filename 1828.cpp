#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1 ; i <= t ; i++){
        string a , b;
        cin >> a >> b;
        if((a == "tesoura" && b == "papel") || (a == "papel" && b == "pedra") || (a == "pedra" && b == "lagarto") || (a == "lagarto" && b == "Spock") || (a == "Spock" && b == "tesoura") || (a == "tesoura" && b == "lagarto") || (a == "lagarto" && b == "papel") || (a == "papel" && b == "Spock") || (a == "Spock" && b == "pedra") || (a == "pedra" && b == "tesoura"))
        cout << "Caso #" << i << ": Bazinga!" << endl;
        else if((b == "tesoura" && a == "papel") || (b == "papel" && a == "pedra") || (b == "pedra" && a == "lagarto") || (b == "lagarto" && a == "Spock") || (b == "Spock" && a == "tesoura") || (b == "tesoura" && a == "lagarto") || (b == "lagarto" && a == "papel") || (b == "papel" && a == "Spock") || (b == "Spock" && a == "pedra") || (b == "pedra" && a == "tesoura"))
        cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        else cout << "Caso #" << i << ": De novo!" << endl;
    }

    return 0;
}