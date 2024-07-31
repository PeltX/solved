//10828, 큐 20240801
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int Q[10000];

int main()
{
	int X, N, ins = 0;
	string str;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> X;
			Q[ins++] = X;
		}
		else if (str == "pop")
		{
			if (ins == 0)
				cout << -1 << '\n';
			else
			{
				cout << Q[0] << '\n';
				for (int j = 0; j < ins-1; j++) //queue의 순위를 한 칸씩 당긴다.
					Q[j] = Q[j + 1];
				ins--;
			}
		}
		else if (str == "size")
			cout << ins << '\n';
		else if (str == "empty")
		{
			if (ins == 0)
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (str == "front")
		{
			if (ins == 0)
				cout << -1 << '\n';
			else
				cout << Q[0] << '\n';
		}
		else if (str == "back")
		{
			if (ins == 0)
				cout << -1 << '\n';
			else
				cout << Q[ins - 1] << '\n';
		}
	}
}
/*
큐는 선입선출(LIFO) 개념 기반의 자료구조이다.
배열로 구현하게 되는 경우, POP을 제외하면 스택 구현과 유사하다.
큐에서 데이터를 POP하는 경우, 가장 먼저 들어온 데이터(Q[0])를 빼낸 다음, 뒤의 데이터들을 한 칸씩 앞으로 당겨주면 되겠다.
*/