#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool Compare(int x, int y)
{
    return x > y;
}

vector<int> solution(vector<int> list)
{
    sort(list.begin(), list.end(), Compare);
    list.erase(unique(list.begin(), list.end()), list.end());
    return list;
}

int main()
{
    int N;
    cin >> N;
    
    vector<int> v;
    for(int i=0; i<N; i++)
    {
        int a;
        cin >> a; 
        v.push_back(a);
    }

    const auto result = solution(v);
    for(const auto i : result) cout << i << ' ';
    
    return 0;
}


