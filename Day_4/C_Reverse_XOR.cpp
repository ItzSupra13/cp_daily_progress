#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

string toBinary(int n) {
    if (n == 0) return "0";
    string binary = "";
    while (n > 0) {
        binary = (char)('0' + n % 2) + binary;
        n /= 2;
    }
    return binary;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        // Special case: n = 0 is always possible (x = 1)
        if (n == 0) {
            cout << "YES\n";
            continue;
        }
        
        // Convert n to binary
        string binary = toBinary(n);
        int len = binary.length();
        
        // If length is odd and first bit is 1, it's impossible
        // because x and f(x) both have their highest bits as 1
        // so XOR of highest bits would be 0
        if (len % 2 == 1 && binary[0] == '1') {
            cout << "NO\n";
            continue;
        }
        
        // Check if n is a palindrome
        if (isPalindrome(binary)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}