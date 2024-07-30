//10828, 스택 20240731
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int stack[10000];

int main()
{
	int X, N, ins=0; //instructor는 stack의 top를 가리킨다.
	string str;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> X;
			stack[ins++] = X;
		}
		else if (str == "pop")
		{
			if(ins==0)
				cout << -1 << '\n';
			else
			{
				cout << stack[ins - 1] << '\n';
				stack[--ins] = 0;
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
		else if (str == "top")
		{
			if (ins == 0)
				cout << -1 << '\n';
			else
				cout << stack[ins - 1] << '\n';
		}
	}
}