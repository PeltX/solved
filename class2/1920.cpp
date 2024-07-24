//1920, 수 찾기 20240724
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

			if (S[i] > O[mid]) //찾는 값이 오른쪽에 있음
				left = mid + 1;
			else if (S[i] < O[mid]) //찾는 값이 왼쪽에 있음
				right = mid - 1;
		}
		cout << k << ' ';
	}
}
/*
이진탐색을 사용하기 위해서는, 정렬된 상태의 array/vector가 필요하다.
C++ 내장 함수 binary_search를 이용할 수도 있다.
for (int i = 0; i < M; i++)
	{
		if (binary_search(O.begin(), O.end(), S[i]))
			cout << 1;
		else
			cout << 0;
		cout << ' ';
	}
	
*/