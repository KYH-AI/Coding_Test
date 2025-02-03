/*#include <iostream>
using namespace std;

int main()
{
    int const ROW = 9, COL = 9;
    int maxResult = 0, row = 0, col = 0;
    int matrix[ROW][COL];

    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL; j++)
        {
           cin >> matrix[i][j];
            if(maxResult < matrix[i][j])
            {
                row = i;
                col = j;
                maxResult = matrix[i][j];
            }
        }
    }

    cout << maxResult << '\n';
    cout << row+1 << ' ' << col+1;

    return 0;
 }*/