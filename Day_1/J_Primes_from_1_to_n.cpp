#include <iostream>
#include <vector>
using namespace std;
vector<int> sieve(int n){
    vector<bool> isprime(n + 1, true);
    for (int p = 2; p * p <= n; p++){
        if (isprime[p] == true){
            for (int i = p * p; i <= n; i += p){
                isprime[i] = false;
            }
        }
    }
    vector<int> res;
    for (int p = 2; p <= n; p++){
        if (isprime[p]){ 
            res.push_back(p);
        }
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    vector<int> prim = sieve(n);
    for (int x : prim){
        cout << x << " ";
    }
}
