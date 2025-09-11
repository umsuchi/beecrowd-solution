#include <iostream>
using namespace std;

int main()
{
    string line;
    int count = 0;

    while(cin >> line){
        if(line == "caw"){
            cin >> line;
            cout << count << endl;
            count = 0;
        }else{
            int v = 0;

            for(int i=0; i<3; i++){
                v <<= 1;
                v += line[i] == '*';
            }
            count += v;
        }
    }

    return 0;
}