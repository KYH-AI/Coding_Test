/*#include <iostream>

using namespace std;

int main(){
    
    int N, bigX = -100001, bigY = -100001, smallX = 100001, smallY = 100001;
    
    cin >> N;
    
    if(N < 2) { cout << 0; return 0; }
       
    while(N--){
        int x,y;
        cin >> x >> y;
        
        if(bigX < x) bigX = x;
        if(bigY < y) bigY = y;
        
        if(smallX > x) smallX = x;
        if(smallY > y) smallY = y;
    }
    
    cout << (bigX-smallX) * (bigY-smallY);
    
    return 0;
}*/