#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


void solve() {
    long long x;
    long n;
    cin >> x >> n;

    set<long long> lights;
    lights.insert(0);
    lights.insert(x);

    multiset<long long> gaps;
    gaps.insert(x);

    long long q;
    while(n--){
        cin >> q;

        auto it = lights.upper_bound(q); //so this is supposed to find the POINTER to immediately bigger light to q, so if x=8, q=3 it finds 8
        long long right = *it;
        long long left = *prev(it); // so this finds 0

        gaps.erase(gaps.find(right-left)); // so 8-0 = 8
        gaps.insert(q-left); // so 3-0 which is 3
        gaps.insert(right-q); // so 8-3 = 5

        lights.insert(q);

        cout << *gaps.rbegin() << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}