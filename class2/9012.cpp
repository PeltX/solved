//9012, ��ȣ 20240727
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int T, L, R, len, stack, err=0; //Test case, ���ʰ�ȣ, �����ʰ�ȣ
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

		if (L != R) //1�� ���� - ���� ��ȣ�� ������ �����ؾ���
			cout << "NO";
		else 
		{
			//2�� ���� - ��ȣ ������ ������ ����. ������ 0�� ���¿��� ���ȣ�� ������ �ȵȴ�.
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