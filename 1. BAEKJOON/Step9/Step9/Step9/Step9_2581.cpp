/*#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int M, N, sum = 0, min = 0;
    bool findMinValue = false;

    cin >> M >> N;

    vector<int> primerSieveArray(N+1, 0);
    
    for(int i=2; i<=N; i++) primerSieveArray[i] = i;

    for(int i=2; i<=N; i++)
    {
        if(primerSieveArray[i] == 0) continue;
        for(int j=2*i; j<=N; j+=i)   primerSieveArray[j] = 0;
    }

    
    for(int i=M; i<=N; i++)
    {
        if(primerSieveArray[i] == 0) continue;

        sum += primerSieveArray[i];

        if(!findMinValue) {
            min = primerSieveArray[i];
            findMinValue = true;
        }
    }

    if(sum == 0)
    {
        cout << -1;
        return 0;
    }
    
    cout << sum << '\n';
    cout << min;
    
    return 0;
}*/