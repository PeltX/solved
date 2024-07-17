//요세푸스 문제, 20240717
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

/*
if (ins >= N - 1)
		{
			ins = 0;
		}
if (V[ins] != 0)
			{
				cout << V[ins] << ", ";
				V[ins] = 0; //출력된 값 0으로 설정

				ins += K ; //지시자는 [2]. [5], [8]...을 가리킨다. idx가 N-1을 초과하면 ins를 초기화하고 남은 분량만큼 움직ㅇ면.. 되나?
				break;

			}
			else //V[ins] == 0인 경우. 인덱스 기준, [2] -> [5] -> [1] -> ([2] -> [5] -> )[6]이다. [2]와 [5]에서 중복이 발생했으니.. 이때의 카운트는 넘겨야 한다
			{
				//근데 이때의 카운트를 처리하려면 어떻게 해야할까? 아무래도 cnt를 써서 하나식 증가하는게 맞으려나.. 근데 시간초과 걸릴지도..
			}
*/