/*#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int** matrixA= new int*[N];
    int** matrixB= new int*[N];

    for(int i=0; i<N; i++)
    {
        matrixA[i] = new int[M];
        for(int j=0; j<M; j++)
        {
           cin >> matrixA[i][j]; 
        }
    }

    for(int i=0; i<N; i++)
    {
        matrixB[i] = new int[M];
        for(int j=0; j<M; j++)
        {
            cin >> matrixB[i][j]; 
        }
    }

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cout << matrixA[i][j] + matrixB[i][j] << ' ';
        }

        cout << '\n';
    }

    for(int i=0; i<N; i++)
    {
        delete[] matrixA[i];
        delete[] matrixB[i];
    }

    delete[] matrixA;
    delete[] matrixB;
    
    return 0;
}*/