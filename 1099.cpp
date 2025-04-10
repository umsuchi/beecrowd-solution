#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0 ; i<n ; i++){
        int x , y , sum = 0;
        cin >> x >> y;

        int m = max(x , y);
        int mm = min(x , y);

        for (int j = mm + 1; j < m ; j++){
            if(j & 1) 
                sum += j;
        }

        cout << sum << endl;
    }

    return 0;
}