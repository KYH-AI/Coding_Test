/*#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int const ROW = 5, COL = 15;
    char matrix[ROW][COL];

    memset(matrix, ' ', sizeof(matrix));

    for(int i=0; i<ROW; i++)
    {
        string word;
        cin >> word;
        for(int j=0; j<word.length(); j++)
        {
            matrix[i][j] = word[j];
        }
    }

    for(int i=0; i<COL; i++)
    {
        for(int j=0; j<ROW; j++)
        {
            if(matrix[j][i] == ' ') continue;
            cout << matrix[j][i];
        }
    }
    
    return 0;
}*/