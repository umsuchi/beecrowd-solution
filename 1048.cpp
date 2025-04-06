#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float s;
    cin >> s;

    if(s > 0 && s <= 400.0){
        cout << "Novo salario: " << fixed << setprecision(2) << (s + (s * 0.15)) << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (s * 0.15) << endl;
        cout << "Em percentual: 15 %" << endl;
    } 
    
    else if(s <= 800.0){
        cout << "Novo salario: " << fixed << setprecision(2) << (s + (s * 0.12)) << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (s * 0.12) << endl;
        cout << "Em percentual: 12 %" << endl;
    }

    else if(s <= 1200.0){
        cout << "Novo salario: " << fixed << setprecision(2) << (s + (s * 0.10)) << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (s * 0.10) << endl;
        cout << "Em percentual: 10 %" << endl;
    }

    else if(s <= 2000.0){
        cout << "Novo salario: " << fixed << setprecision(2) << (s + (s * 0.07)) << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (s * 0.07) << endl;
        cout << "Em percentual: 7 %" << endl;
    } 

    else{
        cout << "Novo salario: " << fixed << setprecision(2) << (s + (s * 0.04)) << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (s * 0.04) << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}