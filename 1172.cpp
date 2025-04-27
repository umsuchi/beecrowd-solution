#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> rep;
    for(int i = 0; i < 10; i++){
        int v;
        cin >> v;
        if(v <= 0) rep.push_back(1);
        else rep.push_back(v);
    }

    for(int i = 0; i < 10 ; i++) cout << "X[" << i << "] = " << rep.at(i) << endl;

    return 0;
}