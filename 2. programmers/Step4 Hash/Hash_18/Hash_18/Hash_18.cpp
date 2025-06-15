#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int n = 4, target;
    int arr[4] = {2,3,5,9};
    cin >> target;

    vector<int> hash_table(target+1, 0);
    
    for(int i=0; i<n; i++)
    {
        if(target < arr[i]) continue;
        hash_table[arr[i]] = 1;
    }

    bool goal = false;
       
    for(int i=0; i<n; i++)
    {
        int tt = target - arr[i];
        if(tt < 0) continue;
        if(tt == arr[i]) continue;
        if(hash_table[tt])
        {
            goal = true;
            break;
        }
    }

    cout << goal;
    return goal;
}
