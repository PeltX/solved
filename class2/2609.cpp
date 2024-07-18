//2609, �ִ������� �ּҰ���� 20240715
#include<iostream>

using namespace std;

int main()
{
	int A, B, q, r;
	cin >> A >> B;
	int GCD, LCM;
	int A_o = A, B_o = B; //LCM ����� ���� A, B ����

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
//LCM�� A, B�� ���� GCD�� ���� ������ A', B'�̶� �Ҷ�, A' X B' X GCD�̴�.

/*
��Ŭ���� ȣ������ ����ϴ� ���� �Ϲ���������, ���� ���� ���ؼ��� ���Ʈ ������ ����غ� �� �ִ�.
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