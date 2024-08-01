//2164, ī��2 20240802
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int N, cnt=1, tmp;
	cin >> N;
	int R;

	if (N == 1) //1�� ��� ����ó��
	{
		cout << 1;
		return 0;
	}

	while (1) //N���� ���� 2�� �ŵ����� ã��
	{
		R = N / pow(2, cnt);
		if (R >= 2)
			cnt++;
		else
			break;
	}
	
	if (pow(2, cnt) == N) //2�� �ŵ����������� �Ǻ�
		cout << N;
	else
	{
		cout << (N - pow(2, cnt)) * 2;
	}
}
/*
������ Queue�� ����ϴ� ��������, �Ϲݼ������ε� �ذ��� �� �ִ�. 
N���� ���� 2�� �ŵ����� 2^K�� M�̶� �ϸ�,
�������� ���� �Ǵ� ī���� ���ڴ� (N-M)*2�̴�.
*/