/*#include <iostream>
#include <string>
using namespace std;

int main()
{
    int timer = 0;
    string numberWord;
    cin >> numberWord;

    for(int i=0; i<numberWord.length(); i++)
    {
        switch (numberWord[i])
        {
        case 'A' : case 'B' : case 'C':
        timer += 3;
        break;

        case 'D' : case 'E' : case 'F' :
        timer += 4;
        break;

        case 'G' : case 'H' : case 'I' :
        timer += 5;
        break;

        case 'J' : case 'K' : case 'L' :
        timer += 6;
        break;

        case 'M' : case 'N' : case 'O' :
        timer += 7;
        break;

        case 'P' : case 'Q' : case 'R' : case 'S' :
        timer += 8;
        break;

        case 'T' : case 'U' : case 'V' :
        timer += 9;
        break;

        case 'W' : case 'X' : case 'Y' : case 'Z' :
        timer += 10;
        break;

        default: timer += 11;
            break;
        }
    }
    cout << timer;
    
    return 0;
}*/