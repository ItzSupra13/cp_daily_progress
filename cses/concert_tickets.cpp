#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long int x;
    cin >> n >> x;

    long int p;
    map<long int, long int> hash;
    vector<long int> weights;

    for(int i=0;i<n;i++){
        cin >> p;
        hash[p] = x - p;
        if(hash.contains(x-p)){
            hash[x-p] = p;
        }
        else{
            hash[x-p] = -1;
        }
        weights[i] = p;
    }
    
    for(int i=0;i<n;i++){
        
    }
    return 0;
}