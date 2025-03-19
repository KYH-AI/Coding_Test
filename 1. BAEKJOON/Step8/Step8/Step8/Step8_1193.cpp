/*
#include <iostream>

using namespace std;

int main() 
{
	// 입력, x축(가로), y축(세로), 이동차례
	int inputX, x = 0, y = 0, count = 1;
	// 대각선 이동, 아래 또는 위 판단
	bool moveDiagonal = false, down = true;

	cin >> inputX;

	// moveDiagonal == ture 경우
	// 1. down 경우  x가 0이 될때 까지 x - 1,  y + 1
	//  1-1. x가 0이 된 경우 moveDiagonal = false, down을 반대로
	// 2. down 아닌 경우 y가 0일 될때 까지 y - 1, x + 1
	//   2-1. y가 0이 된 경우 moveDiagonal = false,  down을 반대로
	// moveDiagonal == false 경우
	// 1. down 경우 x + 1
	// 2. down 아닌 경우 y + 1
	// 3. moveDiagonal = true

	while (inputX != count)
	{
		if (moveDiagonal)
		{
			if (down)
			{
				x -= 1;
				y += 1;
			}
			else
			{
				x += 1;
				y -= 1;
			}

			if (x == 0 || y == 0)
			{
				moveDiagonal = false;
				down = down ? false : true;
			}
		}
		else
		{
			if (down) x += 1;
			else y += 1;
			moveDiagonal = true;
		}
		count++;

		//cout << y + 1  << '/' << x + 1  << '\n';
	}
	

	cout << y + 1 << '/' << x + 1;

	return 0;
}
*/