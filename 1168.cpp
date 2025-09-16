#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int sum=0, n=s.size();

        for(int i=n-1; i>=0; i--){
            char c=s[i];
            if(c == '0' || c == '9' || c == '6') sum += 6;
            else if(c == '2' || c == '3' || c == '5') sum += 5;
            else if(c == '4') sum += 4;
            else if(c == '1') sum += 2;
            else if(c == '7') sum += 3;
            else if(c == '8') sum += 7;
        }

        cout << sum << " leds" << endl;
    }

    return 0;
}