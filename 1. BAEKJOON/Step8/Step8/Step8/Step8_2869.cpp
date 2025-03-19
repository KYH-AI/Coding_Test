#include <iostream>

using namespace std;

int main()
{
    int A, B, V;

    cin >> A >> B >> V;

    int day = (V-B) / (A-B);
    if ((V-B) % (A-B) != 0) day++;

    cout << day;    
    
    return 0;
}