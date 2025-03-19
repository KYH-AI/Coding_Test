/*#include <iostream>

using namespace std;

int main()
{
    // (방법 1)
    int N, x = 2, y = 2, increase = 1;

    cin >> N;

    for(int i=0; i<N; i++)
    {
        x += increase;
        y = x;
        increase *= 2;
    } 
    cout << x*y;
    

    // (방법 2)
    int N, x = 2;
    cin >> N;
    while(N--)
    {
        x = (x * 2) - 1;
    }
    
    cout << x*x;
    
    return 0;
}*/