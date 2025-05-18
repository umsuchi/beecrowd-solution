#include <iostream>
using namespace std;

int main()
{
    int par[5] , impar[5] , a[15] , v = 0 , u = 0;

    for(int i = 0 ; i < 15; i++) {
        cin >> a[i] ;
        if(a[i] % 2 != 0){
            impar[v++] = a[i];
        }
        else{
            par[u++] = a[i];
        }
        if(u == 5){
            for(int j = 0 ; j < 5 ; j++) cout << "par[" << j << "] = " << par[j] << endl;
            u = 0;
        }
        if(v == 5){
            for(int j = 0 ; j < 5 ; j++) cout << "impar[" << j << "] = " << impar[j] << endl;
            v = 0;
        }
    }
    for(int j = 0 ; j < v ; j++) {
        if(impar[j] == 0) break;
        cout << "impar[" << j << "] = " << impar[j] << endl;
    }
    for(int j = 0 ; j < u ; j++) {
        if(par[j] == 0) break;
        cout << "par[" << j << "] = " << par[j] << endl;
    }

    
    return 0;
}