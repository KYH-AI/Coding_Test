#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int N;
    vector<int> int_vec;
    
    cin >> N;
    
    while(N > 1){
        
        for(int i=2; i<=N; i++){
            if(N % i == 0){
                N /= i;
                int_vec.push_back(i);
                break;
            } 
        }
    }

    if(int_vec.empty()) return 0;
    
    for (int i : int_vec) cout << i << '\n';
    
    return 0;
}