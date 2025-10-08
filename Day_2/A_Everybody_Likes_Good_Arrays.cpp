#include <iostream>
#include <vector>
using namespace std;

bool same_parity(int a, int b){
    return  (a%2==0 && b%2==0) || (a%2!=0 && b%2!=0);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vals(n);
        int ops = 0;
        for (int i = 0; i < n; i++)
            cin >> vals[i];
        for (int i = 1; i < n; i++)
        {
            if (same_parity(vals[i - 1], vals[i]))
                ops++;
        }
        cout << ops << "\n";
    }
}