#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0 ; i<n ; i++){
        int x;
        cin >> x ; 

        if(x == 0)
            cout << "NULL" << endl;

        else if(x > 0 && x % 2 == 0)
            cout << "EVEN POSITIVE" << endl;

        else if(x > 0 && x % 2 != 0)
            cout << "ODD POSITIVE" << endl;

        else if(x < 0 && x % 2 == 0)
            cout << "EVEN NEGATIVE" << endl;

        else
            cout << "ODD NEGATIVE" << endl;
    }
    
    return 0;
}