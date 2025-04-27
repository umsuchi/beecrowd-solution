#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> change;

    for(int i = 0 ; i < 20; i++){
        int n;
        cin >> n;
        change.push_back(n);
    }

    int j = 0;
    for(int i = 19 ; i >= 0; i--) {
        cout << "N[" << j << "] = " << change.at(i) << endl;
        j++;
    }

    return 0;
}