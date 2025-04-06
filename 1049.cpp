#include<iostream>
using namespace std;

int main()
{
    char a[15], b[15], c[15];
    cin >> a;
    cin >> b;
    cin >> c;
    
    if(a[0] == 'v' && b[0] == 'a' && c[0] == 'c')
        cout << "aguia" << endl ; 

    else if(a[0] == 'v' && b[0] == 'a' && c[0] == 'o')
        cout << "pomba" << endl ;

    else if(a[0] == 'v' && b[0] == 'm' && c[0] == 'o')
        cout << "homem" << endl ;

    else if(a[0] == 'v' && b[0] == 'm' && c[0] == 'h')
        cout << "vaca" << endl ; 

    else if(a[0] == 'i' && b[0] == 'i' && c[2] == 'm')
        cout << "pulga" << endl ;

    else if(a[0] == 'i' && b[0] == 'i' && c[2] == 'r')
        cout << "lagarta" << endl ;

    else if(a[0] == 'i' && b[0] == 'a' && c[2] == 'm')
        cout << "sanguessuga" << endl ;
        
    else if(a[0] == 'i' && b[0] == 'a' && c[2] == 'i')
        cout << "minhoca" << endl ;

    return 0;
}