#include <iostream>
using namespace std;

int main()
{
    int a, aa = 0 , b , bb = 0 , c = 0 , d = 0;
    int v = 1;

    while (v == 1){
        cin >> a >> b;

        (a > b) ? aa++ : bb++;
        if (a == b) d++;

        do{
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> v;
            c++;
        }while(v != 1 && v != 2);
    }

    cout << c << " grenais" << endl;
    cout << "Inter:" << aa << endl;
    cout << "Gremio:" << bb << endl;
    cout << "Empates:" << d << endl;

    if(aa > bb) cout << "Inter venceu mais" << endl;
    else if(bb > aa) cout << "Gremio venceu mais" << endl;
    else cout << "Não houve vencedor" << endl;

    return 0;
}