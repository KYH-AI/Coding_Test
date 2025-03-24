/*#include <iostream>
#include <string>

using namespace std;

int main(){
    string result;
    int x = -1, y = -1, z = -1;
    
    while(true){
            
        cin >> x >> y >> z;
        if(x == 0 && y == 0 && z == 0) break;
    
        if(z >= x+y || y >= x+z || x >= y+z)  result = "Invalid";
        else{
            if(x == y && y == z) result = "Equilateral";
            else if(x == y || y == z || x == z) result = "Isosceles";
            else result = "Scalene";
        }    
        cout << result << '\n';
    }
    return 0;
}*/