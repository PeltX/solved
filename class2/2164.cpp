//2164, 카드2 20240802
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int N, cnt=1, tmp;
	cin >> N;
	int R;

	if (N == 1) //1인 경우 예외처리
	{
		cout << 1;
		return 0;
	}

	while (1) //N보다 작은 2의 거듭제곱 찾기
	{
		R = N / pow(2, cnt);
		if (R >= 2)
			cnt++;
		else
			break;
	}
	
	if (pow(2, cnt) == N) //2의 거듭제곱수인지 판별
		cout << N;
	else
	{
		cout << (N - pow(2, cnt)) * 2;
	}
}
/*
원래는 Queue를 사용하는 문제지만, 일반수학으로도 해결할 수 있다. 
N보다 작은 2의 거듭제곱 2^K를 M이라 하면,
마지막에 남게 되는 카드의 숫자는 (N-M)*2이다.
*/