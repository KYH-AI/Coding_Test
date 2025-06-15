#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<bool> solution(vector<string> string_list, vector<string> query_list)
{
    const int p = 31;
    const long long int m = 1000000007;
    vector<bool> answer;
    unordered_set<long long> hash_table;

    for(const auto& str : string_list)
    {
        long long hashKey = 0;
        for(const auto& c : str)
        {
            hashKey += (hashKey * p + c) % m;
        }
        
        hash_table.insert(hashKey);
    }

    for(const auto& str : query_list)
    {
        long long hashKey = 0;
        for(const auto& c : str)
        {
            hashKey += (hashKey * p + c) % m;
        }

        if(hash_table.find(hashKey) != hash_table.end())
        {
            answer.push_back(true);
        }
        else
        {
            answer.push_back(false);
        }
    }
    
    return answer;
}

int main()
{
    vector<string> a {"apple", "banana", "cherry"};
    vector<string> b {"apple", "kiwi", "melon", "apple"};
    for(auto i : solution(a, b))
    {
        cout << i << ' ';
    }

    return 0;
}

