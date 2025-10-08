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
        vector<int> arr(n);
        cin >> arr[0];
        bool sorted = true;
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < arr[i - 1])
            {
                sorted = false;
                break;
            }
        }
        if (sorted)
        {
            int ans = INT_MAX;
            for (int i = 1; i < n; i++)
            {
                int diff = arr[i] - arr[i - 1];
                ans = min(ans, (diff / 2) + 1);
            }
            cout << ans << "\n";
        }
        else
        {
            cout << 0 << "\n";
            continue;
        }
    }
}