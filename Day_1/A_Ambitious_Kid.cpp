#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x, steps;
    cin >> steps;
    steps = abs(steps);
    for (int i=0;i<n-1;i++){
        cin >> x;
        steps = min(steps, abs(x));
    }
    cout << steps;
}