#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long target;
    cin >> n >> target;

    vector<pair<long long, int>> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i].first;
        nums[i].second = i + 1;
    }
    sort(nums.begin(), nums.end());
    
    int left = 0;
    int right = n - 1;

    while (left < right) {
        long long current_sum = nums[left].first + nums[right].first;

        if (current_sum == target) {
            cout << nums[left].second << " " << nums[right].second << "\n";
            return 0;
        } 
        else if (current_sum < target) {
            left++;
        } 
        else {
            right--;
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}