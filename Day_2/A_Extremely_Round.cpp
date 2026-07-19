#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, tot = 0;
        cin >> n;
        string s = to_string(n);
        for (int i = 1; i < s.size(); i++){
            tot += 9;
        }
        cout << tot + (s[0] - '0') << "\n";
    }
}
