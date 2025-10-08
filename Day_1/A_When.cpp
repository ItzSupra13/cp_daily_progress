#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int hr = t/60;
    int min = t%60;
    if (min/10==0){
        cout << 21+hr << ":" << "0" << min;
    }
    else{
        cout << 21+hr << ":" << min;
    }
}