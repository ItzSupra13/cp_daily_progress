#include <iostream>
using namespace std;
#include <set>
#include <string>

int main() {
    int y;
    cin >> y;
    while(true){
        y++;
        string s = to_string(y);
        set<char> digits(s.begin(), s.end());
        if(digits.size() == s.size()){
            cout << y;
            break;
        }
    }
}