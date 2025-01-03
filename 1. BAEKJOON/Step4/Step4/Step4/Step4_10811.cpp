/*#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int* bucket = new int[N];

    for(int i=0; i<N; i++) bucket[i] = i+1;
    
    for(int index=0; index<M; index++)
    {
        int i, j, temp_bucket;
        cin >> i >> j;
        for(int front = i; front < j; front++, j--)
        {
            temp_bucket = bucket[front - 1];
            bucket[front - 1] = bucket[j - 1];
            bucket[j - 1] = temp_bucket;
            
            //cout << i << ", " << j << " : ";
            //for(int i=0; i<N; i++) cout << bucket[i];
            //cout << '\n';
        }
    }

    for(int i=0; i<N; i++) cout << bucket[i] << ' ';
    delete[] bucket;
    return 0;
}*/