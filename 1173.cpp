#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n ;
    cin >> n;

    vector<int> fill;

    for(int i = 0; i < 10; i++){
        fill.push_back(n);
        n += n;
    }

    for(int i = 0 ; i < 10 ; i++) 
    cout << "N[" << i << "] = " << fill.at(i) << endl;

    return 0;
}