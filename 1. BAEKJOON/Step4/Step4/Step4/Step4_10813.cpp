/*#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int* bucket = new int[N];

    for(int index = 0; index < N; index++)
    {
        bucket[index] = index+1;
    }

    for(int index = 0; index < M; index++)
    {
        int i, j, temp_bucket;
        cin >> i >> j;
        i -= 1;
        j -= 1;
        temp_bucket = bucket[i];
        bucket[i] = bucket[j];
        bucket[j] = temp_bucket;
    }

    for(int index = 0; index < N; index++)
    {
        cout << bucket[index] << ' ';
    }
    
    delete[] bucket;
    return 0;
}*/