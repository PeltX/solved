//1920, �� ã�� 20240724
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int N, M, mid, k;

	cin >> N;
	vector <int> O(N);
	for (int i = 0; i < N; i++)
		cin >> O[i];
	
	cin >> M;
	vector <int> S(M);
	for (int i = 0; i < M; i++)
		cin >> S[i];

	sort(O.begin(), O.end());

	for (int i = 0; i < M; i++)
	{
		int left = 0, right = O.size() - 1;
		k = 0;

		while (left <= right)
		{
			mid = (left + right) / 2;
			if (S[i] == O[mid])
			{
				k = 1;
				break;
			}

			if (S[i] > O[mid]) //ã�� ���� �����ʿ� ����
				left = mid + 1;
			else if (S[i] < O[mid]) //ã�� ���� ���ʿ� ����
				right = mid - 1;
		}
		cout << k << ' ';
	}
}
/*
����Ž���� ����ϱ� ���ؼ���, ���ĵ� ������ array/vector�� �ʿ��ϴ�.
C++ ���� �Լ� binary_search�� �̿��� ���� �ִ�.
for (int i = 0; i < M; i++)
	{
		if (binary_search(O.begin(), O.end(), S[i]))
			cout << 1;
		else
			cout << 0;
		cout << ' ';
	}
	
*/