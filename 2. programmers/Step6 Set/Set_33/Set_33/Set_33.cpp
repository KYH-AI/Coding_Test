#include <iostream>
#include <vector>

using namespace std;

vector<int>parents;
vector<int>ranks;

int charToInt(char c)
{
    return c - '0';
}

int find(int index)
{
    if(parents[index] == index)
    {
        return index;
    }

    parents[index] = find(parents[index]);
    return parents[index];
}

void unionSet(int x, int y)
{
    int rootX = find(x);
    int rootY = find(y);

    if(rootX != rootY)
    {
        if(ranks[x] > ranks[y])
        {
            parents[rootY] = rootX;
        }
        else if(ranks[x] < ranks[y])
        {
            parents[rootX] = rootY;
        }
        else
        {
            parents[rootY] = rootX;
            ranks[rootX]++;
        }
    }
}

vector<bool> solution(int k, vector<vector<char>> operations)
{
    vector<bool> result;
    parents.resize(k);
    ranks.resize(k, 0);
    
    for(int i=0; i<k; i++)
    {
        parents[i] = i;       
    }

    for(const auto& op : operations)
    {
        if(op[0] == 'u')
        {
            int x = charToInt(op[1]);
            int y = charToInt(op[2]);
            unionSet(x, y);
        }
        else if(op[0] == 'f')
        {
            int x = charToInt(op[1]);
            int y = charToInt(op[2]);
            result.push_back(find(x) == find(y));
        }
    }

    return result;
}




void init()
{
    parents.clear();
    ranks.clear();
}
void print(vector<bool> vec)
{
    copy(vec.begin(), vec.end(), std::ostream_iterator<bool>(cout, " "));
    cout << endl;
}

int main()
{
    print(solution(3, {{'u', '0', '1'}, {'u', '1', '2'}, {'f', '0', '2'}})); // 결과값 : 1
    init();
    print(solution(4, {{'u', '0', '1'}, {'u', '2', '3'}, {'f', '0', '1'}, {'f', '0', '2'}})); // 결과값 : 1 0
  
    return 0;
}