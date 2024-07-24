//1158, 요세푸스 문제, 20240717
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int N, K;
	
	cin >> N >> K;
	vector<int> V(N);

	int i, j, cnt;
	int ins=0; //INDEX instructor
	cout << '<';
	
	for (i = 0; i < N; i++) //Vecotr 요소값 초기화
		V[i] = i+1;

	for (i = 0; i < N; i++)
	{
		cnt = 0;

		//V[0] ~ V[N-1]까지 반복해서 탐색
		while (1)
		{
			//지시자가 주어진 범위를 넘어가는 경우 초기화
			if (ins == N) 
				ins = 0;

			//V[ins]에 값이 있는 경우 Count가 증가한다.
			if (V[ins] != 0) 
				cnt++;
			
			// Count가 K와 같아질 때의 V[ins]를 출력하고, 해당 인덱스의 값을 0으로 초기화한다.
			if (cnt == K)
			{
				cout << V[ins]; 
				V[ins] = 0;
				break;
			}		
			ins++;
		}
		
		if (i != N - 1)
			cout << ", ";
	}
	cout << '>';
}