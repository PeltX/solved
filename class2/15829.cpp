//15829, Hasing 20240715
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	string str;
	long long sum=0, k=1;
	int N, M = 1234567891;

	scanf("%d", &N);
	cin >> str;
	
	for (int i = 0; i < N; i++)
	{
		sum += ((str[i]-96) * k);
		k = k * 31 % M;
	}
	printf("%lld", sum % M);
}
/*
문자열의 길이가 최대 50이므로, k가 가지게 되는 최대 값은 31^49 => u l l로 처리하더라도 overflow가 발생한다.
(A X B) % C == ((A % C) X (B % C)) % C임을 이용해야 하며, 이때 B(str[i]-96]의 값은 1~26이므로 A(k==31^i)에 대해서만 mod M을 시행하면 된다.
마지막으로, (I + J + K) % M = (I % M + J % M + K % M) % M이므로, 구해진 sum에 대해서도 mod M을 한 번 더 진행해주어야 한다.
*/