/*#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int B, result = 0;
    long long power = 1;
    string N;

    cin >> N >> B;

    for(int i=N.length() - 1; i>=0; i--)
    {
        int value;
        if(isdigit(N[i]))
        {
            value = N[i] - '0';
        }
        else
        {
            value = N[i] - 'A' + 10;      
        }
        result += value * power;
        power *= B;
    }

    cout << result;
    
    return 0;
}*/