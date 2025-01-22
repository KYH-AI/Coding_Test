/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int const MAX = 8;
    string croatia[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string input;

    cin >> input;

    for(int i=0; i<MAX; i++)
    {
        while(true)
        {
            int index = input.find(croatia[i]);
            if(index == string::npos)  break;
            input.replace(index, croatia[i].length(), "?");
        }
    }
    
   cout << input.length();

    return 0;
}
*/
