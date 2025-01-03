/*#include <iostream>
using namespace std;

int main()
{
    int N, min, max = 0;
    cin >> N;
    int* array = new int[N];

    for(int i=0; i<N; i++)
    {
        cin >> array[i];
    }

    max = min = array[0];
    
    for(int i=0; i<N; i++)
    {
       if(max < array[i]) max = array[i];
       if(min > array[i]) min = array[i]; 
    }

    cout << min << ' ' << max;
    
    return 0;
}*/