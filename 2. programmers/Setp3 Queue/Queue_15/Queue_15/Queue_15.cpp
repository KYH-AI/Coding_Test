#include<iostream>
#include<queue>

using namespace std;

int soultion(int n, int k)
{
    queue<int> q;
    for(int i=1; i<=n; i++) q.push(i);

    while (q.size() > 1)
    {
        for(int i=0; i<k-1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }
    
    return q.front();
}

int main(int argc, char* argv[])
{
    cout << soultion(5, 2);
    return 0;
}
