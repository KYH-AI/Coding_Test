#include <iostream>

using namespace std;

int main(){
    
    int N, sugar = 0;
    cin >> N;
    
    while(N > 0){

        if(N % 5 == 0){
            N -= 5;
            sugar++;
        }
        else {
            N -= 3;
            sugar++;
        }
        if(N < 0) sugar = -1;
    }
    
    cout << sugar;
    
    return 0;
}