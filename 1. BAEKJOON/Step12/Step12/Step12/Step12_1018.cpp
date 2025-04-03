/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int GetColorCount(char** blackBoard, const char color, const int x, const int y);

int main(){
    
    int M, N;
    vector<int> whiteBlackCount;
    cin >> M >> N;
    char ** blackBoard = new char*[M];
    for(int i=0; i<M; i++) blackBoard[i] = new char[N];
    
    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++)
            cin >> blackBoard[i][j];

    for(int y=0; y<M-7; y++){
        for(int x=0; x<N-7; x++){
            int blackCount = GetColorCount(blackBoard, 'W', x, y);
            int whiteCount = GetColorCount(blackBoard, 'B', x, y);

            if(blackCount > whiteCount) whiteBlackCount.push_back(whiteCount);
            else whiteBlackCount.push_back(blackCount);
        }
    }
    
    for(int i=0; i<M; i++) delete[] blackBoard[i];
    delete[] blackBoard;

    int min = *min_element(whiteBlackCount.begin(), whiteBlackCount.end());
    cout << min;

    return 0;
}

int GetColorCount(char** blackBoard, const char color, const int x, const int y)
{
    int colorCount = 0;
    for(int Y=y; Y<y+8; Y++){
        for(int X=x; X<x+8; X++){
            if((Y + X) % 2 == 0) {
                if(blackBoard[Y][X] != color) colorCount++;
            }
            else {
                if(blackBoard[Y][X] == color) colorCount++;
            }
        }
    }
    return colorCount;
}
*/


