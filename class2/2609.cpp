//2609, 최대공약수와 최소공배수 20240715
#include<iostream>

using namespace std;

int main()
{
	int A, B, q, r;
	cin >> A >> B;
	int GCD, LCM;
	int A_o = A, B_o = B; //LCM 계산을 위한 A, B 원본

	//GCD by Euclidean Algorithm
	if (A >= B)
	{
		while (1)
		{
			q = A / B;
			r = A - B * q;
			if (r == 0) break;
			A = B;
			B = r;
		}
		GCD = B;
	}
	else
	{
		while (1)
		{
			q = B / A;
			r = B - A * q;
			if (r == 0) break;
			B = A;
			A = r;
		}
		GCD = A;
	}
	
	//LCM
	A_o /= GCD;
	B_o /= GCD;
	LCM = GCD * A_o * B_o;

	cout << GCD << ' ' << LCM;
}
//LCM은 A, B를 각각 GCD로 나눈 값들을 A', B'이라 할때, A' X B' X GCD이다.

/*
유클리드 호제법을 사용하는 것이 일반적이지만, 작은 수에 대해서는 브루트 포스도 사용해볼 수 있다.
//GCD by Brute Force
	if (A > B)
	{
		for (i = 1; i <= B; i++)
		{
			if (A % i == 0 && B % i == 0)
				GCD = i;
		}
	}
	else
	{
		for (i = 1; i <= A; i++)
		{
			if (A % i == 0 && B % i == 0)
				GCD = i;
		}
	}
*/