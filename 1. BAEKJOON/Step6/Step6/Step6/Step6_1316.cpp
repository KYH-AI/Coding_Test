/*#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    int N, count = 0;
    string input;
    cin >> N;
    count = N;
    for(int i=0; i<N; i++)
    {
        cin >> input;
        bool skip = false;
        list<char> groupWord;
        
        for(int j=0; j<input.length();)
        {
            char target = input[j];

            for(char word : groupWord)
            {
                if(target == word)
                {
                    skip = true;
                    break;
                }
            }

            if(skip)
            {
                count--;
                break;
            }
            
            for(int k=j; k<input.length(); k++)
            {
                if(target != input[k])
                {
                    j = k;
                    groupWord.push_back(target);
                    skip = true;
                    break;
                }
            }
            
            if(!skip)  j++;
            skip = false;
        }
    }
    cout << count << '\n';
    
    return 0;
}*/