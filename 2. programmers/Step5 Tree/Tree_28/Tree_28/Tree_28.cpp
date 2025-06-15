#include <vector>
#include <string>
#include <iostream>

using namespace std;

string preodrder(vector<int> nodes, int idx)
{
    if(idx < nodes.size())
    {
        string ret = to_string(nodes[idx]) + " ";
        ret += preodrder(nodes, idx * 2 + 1);
        ret += preodrder(nodes, idx * 2 + 2);
        return ret;
    }
    return "";
}

string inodrer(vector<int> nodes, int idx)
{
    if(idx < nodes.size())
    {
        string ret = inodrer(nodes, idx * 2 + 1);
        ret += to_string(nodes[idx]) + " ";
        ret += inodrer(nodes, idx * 2 + 2);
        return ret;
    }
    return "";
}


string postorder(vector<int> nodes, int idx)
{
    if(idx < nodes.size())
    {
        string ret = postorder(nodes, idx * 2 + 1);
        ret += postorder(nodes, idx * 2 + 2);
        ret +=  to_string(nodes[idx]) + " ";
        return ret;
    }
    return "";
}


vector<string> solution(vector<int> nodes)
{
    vector<string> answer;
    string pre = preodrder(nodes, 0);
    string in = inodrer(nodes, 0);
    string post = postorder(nodes, 0);

    answer.push_back(pre);
    answer.push_back(in);
    answer.push_back(post);

    return answer;
}

int main()
{
    vector<int> a = {1,2,3,4,5,6,7};
    vector<string > answer = solution(a);
    for(const auto& s : answer)
    {
        cout << s << '\n';
    }

    return 0;
}