/*#include <iostream>
using namespace std;

int main()
{
    int const MAX = 10, DIVIDER = 42;
    int count = 0;
    bool array[DIVIDER] = {false};

    for(int i=0; i<MAX; i++)
    {
        int value;
        cin >> value;
        array[value % DIVIDER] = true;
    }

    for(int i=0; i<DIVIDER; i++)
    {
        if(array[i]) count++;
    }

    cout << count;
    
    return 0;
}*/