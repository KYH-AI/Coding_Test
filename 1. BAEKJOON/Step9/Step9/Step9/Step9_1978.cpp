/*
#include <iostream>

using namespace std;

int main(){
    
    int N,  primeNumCount = 0;
    
    cin >> N;
    
    int* array = new int[N];
    for(int i=0; i<N; i++)   cin >> array[i];
    
    for(int i=0; i<N; i++){
        int primeNum = 0;
        for(int j=1; j<=array[i]; j++){
            if(array[i] % j == 0){
                primeNum++;
                if(primeNum > 2)   break;
            }
        }
        if(primeNum == 2) primeNumCount++;
    }
    
    cout << primeNumCount;
    delete[] array;
    
    return 0;
}
*/