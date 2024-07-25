//18110, solved.ac 20240725
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int N;
	double sum=0, avg;
	
	cin >> N;

	if (N == 0) //아무 의견이 없는 경우 난이도는 0이다.
	{
		cout << 0;
		return 0;
	}

	vector <int> vec(N);

	for (int i = 0; i < N; i++)
		cin >> vec[i];

	sort(vec.begin(), vec.end()); //벡터 정렬
	int K = floor((N * 0.15) + 0.5); //위, 아래에서 각각 제외할 의견 수 

	for (int i = K; i < N - K; i++)
		sum += vec[i];

	avg = sum / (N - 2 * K);
	avg = floor(avg + 0.5);
	cout << avg;

	return 0;
}