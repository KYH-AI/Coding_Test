/*
#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> int_v;
    int N, K;
    
    cin >> N >> K;
    
    for(int i=1; i<=N; i++){
        if(N % i == 0) int_v.push_back(i);
    }
    
    if(int_v.size() >= K) cout << int_v[K-1];
    else cout << '0';
    
    return 0;
}
*/