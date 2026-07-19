#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Element {
    int value;
    int index;
    bool operator<(const Element& other) const {
        return value < other.value;
    }
};

void solve() {
    int n, target;
    if (!(cin >> n >> target)) return;
    
    vector<Element> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i].value;
        nums[i].index = i + 1;
    }

    sort(nums.begin(), nums.end());
    
    bool found = false;
    int limit = static_cast<int>(nums.size()); 
    for (int i = 0; i < limit; i++) {
        int j = i + 1;
        int r = limit - 1;
        
        while (j < r) {
            long long total = (long long)nums[i].value + nums[j].value + nums[r].value;
            
            if (total > target) {
                r--;
            }
            else if (total < target) {
                j++;
            }
            else {
                cout << nums[i].index << " " << nums[j].index << " " << nums[r].index << "\n";
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    
    if (!found) {
        cout << "IMPOSSIBLE\n";
    }
}

int main() {
    solve();
    return 0;
}