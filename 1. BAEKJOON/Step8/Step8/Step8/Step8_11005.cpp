/*#include <iostream>
#include <string>
#include <algorithm>  

using namespace std;

int main()
{
    int N, B;
    string formation;

    cin >> N >> B;

    while(N > 0)
    {
        int remainder = N%B;
        
        if(remainder >= 10)
        {
            formation += 'A' + (remainder - 10);
        }
        else
        {
            formation += to_string(remainder);
        }

        N /= B;
    }

    reverse(formation.begin(), formation.end());
    cout << formation;
    
    return 0;
}*/