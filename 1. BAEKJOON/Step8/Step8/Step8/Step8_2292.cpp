/*
#include <iostream>

using namespace std;

int main() 
{
	
	//	벌집의 방(층)을 나갈 때 마다 6의 배수로 커진다.
	//	1번 방에서 다음 층의 방들은 +6 값으로 커진다. 
	//	7번 방에서 다음 층은 방들은 +12 값으로 커진다.
	//	19번 방에서 다음 층은 방들은 +18 값으로 커진다.
	

	int const PLUS = 6; // 증가 값
	int N, start = 1, floor = 1, drainage = 0; // N 입력, start 시작 방, floor 층(출력 값), drainage 다음 층들의 방 증가 값 누적 합

	cin >> N;

	
	//	현재 방 % 목적지 방 == 현재 방 경우 다음 층으로 이동해야함.
	
	while (start % N == start)
	{
		// cout << start << '%' << N << '=' << room << '\n';
		start += drainage += PLUS; 
		floor++; // 이동한 층 증가
	}
	
	cout << floor;

	return 0;
}
*/