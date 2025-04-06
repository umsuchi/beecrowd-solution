#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a , b , c , d , e ,ave;
    cin >> a >> b >> c >> d;

    ave = (a * 2 + b * 3 + c * 4 + d) / 10;
    cout << "Media: " << fixed << setprecision(1) << ave << endl;

    if(ave >= 7.0)
        cout << "Aluno aprovado." << endl;

    else if (ave >= 5.0 && ave < 6.9)
    {
        cout << "Aluno em exame." << endl;

        cin >> e;
        cout << "Nota do exame: " << fixed << setprecision(1) << e << endl;

        double sum = (ave + e) / 2;

        if(sum >= 5.0)
            cout << "Aluno aprovado." << endl;

        else
            cout << "Aluno reprovado." << endl;

        cout << "Media final: " << fixed << setprecision(1) << sum << endl;

    }

    else 
        cout << "Aluno reprovado." << endl;

    return 0;
}