#include <iostream>
using namespace std;

int main() {
    int t,x;
    bool ishard = false;
    cin >> t;
    while(t--){
        cin >> x;
        if (x==1) ishard = true;
    }
    if (ishard==true) cout << "HARD";
    else cout << "EASY";
}