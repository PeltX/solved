//9012, 괄호 20240727
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int T, L, R, len, stack, err=0; //Test case, 왼쪽괄호, 오른쪽괄호
	cin >> T;

	string str;

	for (int i = 0; i < T; i++)
	{
		cin >> str;
		L = 0, R = 0, stack=0, err=0;
		len = str.length();

		for (int j = 0; j < len ; j++)
		{
			if (str[j] == '(')
				L++;
			else if (str[j] == ')')
				R++;
		}

		if (L != R) //1차 조건 - 양쪽 괄호의 개수가 동일해야함
			cout << "NO";
		else 
		{
			//2차 조건 - 괄호 스택의 정상적 소진. 스택이 0인 상태에서 우괄호를 만나면 안된다.
			for (int j = 0; j < len; j++)
			{
				if (str[j] == '(')
					stack++;
				else if (str[j] == ')')
				{
					stack--;
					if (stack == -1)
					{
						cout << "NO";
						err = 1;
						break;
					}
				}
				
			}
			if (err == 0)
				cout << "YES";
		}
		cout << '\n';
	}
}