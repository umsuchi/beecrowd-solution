#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;

    for(int i = 0 ; i < n; i++){
        int pa , pb , c = 0;
        cin >> pa >> pb;

        double g1 , g2;
        cin >> g1 >> g2;

        while(pa <= pb){
            pa += (int) ((g1 / 100.0) * pa);
            pb += (int) ((g2 / 100.0) * pb);
            c++;
            if(c > 100) break;
        }
        if(c > 100) cout << "Mais de 1 seculo." << endl;
        else cout << c << " anos." << endl;

    }

    return 0;
}