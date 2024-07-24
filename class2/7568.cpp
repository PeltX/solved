//7568, 덩치 20240724
#include<iostream>
#include<algorithm>

using namespace std;

typedef struct {
	int w;
	int h;
} body;

int main()
{
	body arr[50];
	int N, cnt;

	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i].w >> arr[i].h;
	
	for (int i = 0; i < N; i++)
	{
		cnt = 0;
		for (int j = 0; j < N; j++)
		{
			if (arr[j].w > arr[i].w && arr[j].h > arr[i].h)
				cnt++;
		}
		cout << cnt+1 << ' ';
	}
}
/*
문제를 잘 읽는 것도 중요하다. 문제의 조건이나, 문제풀이의 힌트를 제공하기 때문.
문제에서, 각 사람의 덩치 등수는 자신보다 더 큰 덩치를 가진(몸무게&키가 더 큰) 사람의 수 + 1로 "정의"하고 있다.
즉, 데이터를 별도로 정렬할 필요 없이, 문제의 정의에만 잘 맞추어가면 되겠다.
이 문제에서, 우위를 비교할 수 없는 데이터 간의 관계는 전혀 중요하지 않다는 것을 기억하자.
*/