#include <iostream>
using namespace std;

int main()
{
    int const X = 100, Y = 100, PAPER_X = 10, PAPER_Y = 10;
    int count = 0, result = 0;
    bool matrix[X][Y] = {false}; // 전체 배열을 false(0)으로 초기화 (쓰레기 값 주의!)
    
    cin >> count;

    for(int i=0; i<count; i++)
    {
        int paperInputX, paperInputY;
        cin >> paperInputX >> paperInputY;
        for(int j=paperInputX; j<paperInputX+PAPER_X; j++)
        {
            for(int k=paperInputY; k<paperInputY+PAPER_Y; k++)
            {
                matrix[j][k] = true;
            }
        }
    }
    
    for(int i=0; i<X; i++)
    {
        for(int j=0; j<Y; j++)
        {
            if(matrix[i][j]) result++;
        }
    }

    cout << result;
    
    return 0;
}