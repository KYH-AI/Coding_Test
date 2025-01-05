/*#include <iostream>
#include <string>
using namespace std;

int main()
{
    int wordsCount = 1;
   
    string soManyWords;
    getline(cin, soManyWords);

    if(soManyWords.length() == 1 && soManyWords[0] == ' ')
    {
        cout<< 0;
        return 0;
    }
    for(int i=1; i<soManyWords.length()-1; i++)
    {
        if(soManyWords[i] == ' ') wordsCount++;
    }
    cout << wordsCount;
    
    return 0;
}*/