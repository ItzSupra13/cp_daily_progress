#include <iostream>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    int ar[4] = {0,0,0,0};
    while(n--){
        cin >> x;
        if (x>0) ar[0]++;
        else if (x<0) ar[1]++;

        if (x%2==0) ar[2]++;
        else ar[3]++;
    }
    cout << "Even: " << ar[2] << "\n";
    cout << "Odd: " << ar[3] << "\n";
    cout << "Positive: " << ar[0] << "\n";
    cout << "Negative: " << ar[1] << "\n";
}
