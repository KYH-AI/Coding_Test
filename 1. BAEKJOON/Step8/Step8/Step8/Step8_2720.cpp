/*
#include <iostream>

using namespace std;

int main()
{
    int const QUARTER  = 25, DIME = 10, NICKEL = 5, PENNY = 1;
    int T;
    cin >> T;
    int** result = new int*[T];
    
    for(int i=0; i<T; i++) result[i] = new int[4];

    for(int i=0; i<T; i++)
    {
        int money;
        cin >> money;
        result[i][0] = money / QUARTER;
        money = money % QUARTER;
        result[i][1] = money / DIME;
        money = money % DIME;
        result[i][2] = money / NICKEL;
        money = money % NICKEL;
        result[i][3] = money / PENNY;
        money = money % PENNY;
    }

    for(int i=0; i<T; i++)
    {
        cout << result[i][0] << ' ' << result[i][1] << ' ' << result[i][2] << ' ' << result[i][3] << '\n';
    }
    
    for(int i=0; i<T; i++) delete[] result[i];
    delete[] result;
    
    return 0;
}
*/
