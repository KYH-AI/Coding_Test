/*
#include <iostream>

using namespace std;

int main() 
{
	// �Է�, x��(����), y��(����), �̵�����
	int inputX, x = 0, y = 0, count = 1;
	// �밢�� �̵�, �Ʒ� �Ǵ� �� �Ǵ�
	bool moveDiagonal = false, down = true;

	cin >> inputX;

	// moveDiagonal == ture ���
	// 1. down ���  x�� 0�� �ɶ� ���� x - 1,  y + 1
	//  1-1. x�� 0�� �� ��� moveDiagonal = false, down�� �ݴ��
	// 2. down �ƴ� ��� y�� 0�� �ɶ� ���� y - 1, x + 1
	//   2-1. y�� 0�� �� ��� moveDiagonal = false,  down�� �ݴ��
	// moveDiagonal == false ���
	// 1. down ��� x + 1
	// 2. down �ƴ� ��� y + 1
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