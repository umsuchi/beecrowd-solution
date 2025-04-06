#include<iostream>
using namespace std;

int main()
{
    int n , e = 0 , o = 0, p = 0 , ap = 0 ;

    for(int i = 0 ; i<5 ; i++){
        cin >> n ;
        if(n % 2 == 0)
            e++;
        else
            o++;
        if(n > 0)
            p++; 
        if(n < 0)
            ap++;
    }

    cout << e << " valor(es) par(es)" << endl ;
    cout << o << " valor(es) impar(es)" << endl ;
    cout << p << " valor(es) positivo(s)" << endl ;
    cout << ap << " valor(es) negativo(s)" << endl ;

    return 0;
}