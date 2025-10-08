#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vals(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vals[i];
        }
        unordered_set<int> map(vals.begin(), vals.end());
        if (map.size() == 1)
            cout << "NO" << "\n";
        else
        {
            cout << "YES" << "\n";
            sort(vals.begin(), vals.end(), greater<int>());
            if(vals.size()>=2 && vals[0]==vals[1]){
                swap(vals[0], vals[vals.size()-1]);
            }
            for(int i=0;i<n;i++){
                cout << vals[i] << " ";
            }
            cout << "\n";
        }
    }
}