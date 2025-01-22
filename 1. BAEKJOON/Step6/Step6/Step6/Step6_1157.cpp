/*#include <iostream>
#include <string>
using namespace std;

int main()
{
    int const MAX = 26;
    int alphaBetMaxCount = 0, bigAlphaBetIndex = 0, alphaBet[MAX] = {0,};
    bool tie = false;
    string word;
    cin >> word;

    for(int i=0; i<word.length(); i++)
    {
        word[i] = tolower(word[i]);
        alphaBet[word[i]-'a']++;
    }

    for(int i=0; i<MAX; i++)
    {
        if(alphaBetMaxCount < alphaBet[i])
        {
            alphaBetMaxCount = alphaBet[i];
            bigAlphaBetIndex = i;
            tie = false;
        }
        else if(alphaBet[i] == alphaBetMaxCount && alphaBetMaxCount > 0)
        {
            tie = true;
        }
    }

    cout << (tie ? '?' : (char)(bigAlphaBetIndex + 'A'));

    return 0;
}*/