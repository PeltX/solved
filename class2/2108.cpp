//2108, 통계학 20240726
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int A[8001] = { 0 };

int main()
{
	int N, sum = 0;

	int* cnt = &A[4000];
	cin >> N; //단, N은 홀수이다.
	vector <int> arr(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		sum += arr[i];
		cnt[arr[i]]++; //등장 횟수 누적
	}

	int mode = 0, count = 0; //최빈값, 최대 등장 횟수
	int mcnt = 0; //여러 개의 최빈값에 대한 카운터

	for (int i = -4000; i <= 4000; i++)
	{
		if (cnt[i] > count) //등장 횟수가 기존 count를 넘어가는 경우
		{
			mode = i;
			count = cnt[i];
		}
	}
	for (int i = -4000; i <= 4000; i++) //최빈 값이 여러 개인 경우. 최빈값이 하나인 경우 반복문은 돌지만 조건을 만족하지 못하므로 위의 mode가 출력된다.
	{
		if (count == cnt[i])
		{
			mcnt++;
			if (mcnt == 2)
			{
				mode = i;
				break;
			}
		}
	}

	sort(arr.begin(), arr.end());
	double avg = (double)sum / N;
	int max = arr.back() - arr.front(); //정렬된 arr에서, 첫 번째 요소는 최소, 마지막 요소는 최대이다.

	cout << floor(avg + 0.5) << '\n'; //산술평균(반올림). round를 이용할 수도 있다. 단 이 경우 negative zero에 주의해 출력할 것.
	cout << arr[N / 2] << '\n'; //중앙값
	cout << mode << '\n'; //최빈값(여러 개 있을 경우 두 번째로 작은 값)
	cout << max << '\n'; //범위
}

/* 산술평균, 중앙값, 범위의 표현은 쉬운 문제. 최빈값이 약간 까다로운데, 여러 개의 최빈값이 존재할 경우 두 번째로 작은 값을 출력해야한다.
위 코드에서는, 우선 반복문을 돌며 최대 등장 횟수를 구한 후, 최대 등장 횟수와 동일한 cnt[i]를 찾아내는 방식으로 구현했다. 직관적이긴 하지만, 최빈값이 하나인 경우에도 아래 반복문을 돌아야하는 단점은 있다.
아래의 코드는 하나의 반복문을 통해, 최빈값이 여러개인 경우를 계속해서 계산한다.

if (cnt[i] > count) //등장 횟수가 기존 count를 넘어가는 경우
		{
			mode = i;
			count = cnt[i];
			mcnt =1;
		}
		else if (cnt[i] == count && mcnt == 1) //count와 같은 등장 횟수를 가지는 두 번째로 작은 수
		{
			mode = i;
			mcnt = 0;
		}
*/