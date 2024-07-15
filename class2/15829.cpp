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
���ڿ��� ���̰� �ִ� 50�̹Ƿ�, k�� ������ �Ǵ� �ִ� ���� 31^49 => u l l�� ó���ϴ��� overflow�� �߻��Ѵ�.
(A X B) % C == ((A % C) X (B % C)) % C���� �̿��ؾ� �ϸ�, �̶� B(str[i]-96]�� ���� 1~26�̹Ƿ� A(k==31^i)�� ���ؼ��� mod M�� �����ϸ� �ȴ�.
����������, (I + J + K) % M = (I % M + J % M + K % M) % M�̹Ƿ�, ������ sum�� ���ؼ��� mod M�� �� �� �� �������־�� �Ѵ�.
*/