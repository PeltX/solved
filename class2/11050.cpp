//11050, 이항 계수 1 20240717
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int N, K, nCk=1, kf=1;

	cin >> N >> K;

	for (int i = K; i > 1; i--)
	{
		kf*= i;
	}

	if (K == 0 || K == N) //nC0 = nCn = 1
		cout << nCk;

	else
	{
		for (int i = N; i > N-K; i--)
		{
			nCk *= i;
		}
		nCk /= kf;
		cout << nCk;
	}
}