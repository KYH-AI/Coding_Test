/*#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    
    int N = 0;
    while(true){

        if(cin >> N && N == -1) break;
        
        vector<int> v_int;
        for(int i=1; i<=N; i++){
            if(N%i == 0) v_int.push_back(i);          
        }
        
        int sum = 0;
        string sumText;
        for(int i=0; i<v_int.size()-1; i++){
            sum += v_int[i];
            sumText += to_string(v_int[i]) + " + ";
        }
        
        if(sum > N || sum < N) {
            cout << N << " is NOT perfect." <<'\n';
            continue;
        }
  
        if (!sumText.empty()) sumText.erase(sumText.size() - 3);
        cout << N << " = " << sumText << '\n';
    }
    
    return 0;
}*/