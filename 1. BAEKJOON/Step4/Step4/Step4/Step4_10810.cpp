/*#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int* bucket = new int[N]();

    for(int index=0; index<M; index++)
    {
        int i,j,k;
        cin >> i >> j >> k;
        for(int index2 = i-1; index2 < j ; index2++)
        {
            bucket[index2] = k;
        }
    }

    for(int i=0; i<N; i++)
    {
        cout << bucket[i] << ' ';
    }
    
    return 0;
}*/