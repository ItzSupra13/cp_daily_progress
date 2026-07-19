#include <iostream>
using namespace std;
int main(){
    char X;
    cin >> X;
    if (X>='a' && X<='z'){
        cout << (char)((int)'A'+ ((int)X - 'a'));
    }
    else if (X>='A' && X<='Z'){
        cout << (char)((int)'a'+ ((int)X - 'A'));
    }
}

