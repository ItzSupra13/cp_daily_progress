using namespace std;
#include <iostream>
#include <unordered_map>

int main(){
    unordered_map<int, int> hash;
    int x;
    for(int i=0;i<5;i++){
        cin >> x;
        hash[x]++;
    }
    if (size(hash) == 2 && (hash[x] == 2 || hash[x] == 3)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}

