#include <iostream>

using namespace std;

int main(){
    
    int a, b, c, sum = 0;
    
    cin >> a >> b >> c;
    
    if(a == b && b == c) sum = a + b + c;
    else{
        if(a + b <= c) c = a+b-1;
        else if(a + c <= b) b = a+c-1;
        else if(c + b <= a) a = c+b-1;
        sum = a + b + c;
    }
    
    cout << sum;

    return 0;
}