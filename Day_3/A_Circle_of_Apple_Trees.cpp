#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 1;
        int b[];
        for 
        // duplicate the array
        vector<int> a(2 * n);
        for i in range(2*n){
            a[i] = b[i % n];
        }

    for i in range(n):
        len = 1
        for j in range(i+1, i+n):
            if a[j] > a[j-1]:
                len++
            else:
                break;
    ans = max(ans, len);
    print(ans)
    }
}