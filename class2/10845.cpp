//10828, ť 20240801
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
				for (int j = 0; j < ins-1; j++) //queue�� ������ �� ĭ�� ����.
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
ť�� ���Լ���(LIFO) ���� ����� �ڷᱸ���̴�.
�迭�� �����ϰ� �Ǵ� ���, POP�� �����ϸ� ���� ������ �����ϴ�.
ť���� �����͸� POP�ϴ� ���, ���� ���� ���� ������(Q[0])�� ���� ����, ���� �����͵��� �� ĭ�� ������ ����ָ� �ǰڴ�.
*/