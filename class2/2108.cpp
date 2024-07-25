//2108, ����� 20240726
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
	cin >> N; //��, N�� Ȧ���̴�.
	vector <int> arr(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		sum += arr[i];
		cnt[arr[i]]++; //���� Ƚ�� ����
	}

	int mode = 0, count = 0; //�ֺ�, �ִ� ���� Ƚ��
	int mcnt = 0; //���� ���� �ֺ󰪿� ���� ī����

	for (int i = -4000; i <= 4000; i++)
	{
		if (cnt[i] > count) //���� Ƚ���� ���� count�� �Ѿ�� ���
		{
			mode = i;
			count = cnt[i];
		}
	}
	for (int i = -4000; i <= 4000; i++) //�ֺ� ���� ���� ���� ���. �ֺ��� �ϳ��� ��� �ݺ����� ������ ������ �������� ���ϹǷ� ���� mode�� ��µȴ�.
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
	int max = arr.back() - arr.front(); //���ĵ� arr����, ù ��° ��Ҵ� �ּ�, ������ ��Ҵ� �ִ��̴�.

	cout << floor(avg + 0.5) << '\n'; //������(�ݿø�). round�� �̿��� ���� �ִ�. �� �� ��� negative zero�� ������ ����� ��.
	cout << arr[N / 2] << '\n'; //�߾Ӱ�
	cout << mode << '\n'; //�ֺ�(���� �� ���� ��� �� ��°�� ���� ��)
	cout << max << '\n'; //����
}

/* ������, �߾Ӱ�, ������ ǥ���� ���� ����. �ֺ��� �ణ ��ٷο, ���� ���� �ֺ��� ������ ��� �� ��°�� ���� ���� ����ؾ��Ѵ�.
�� �ڵ忡����, �켱 �ݺ����� ���� �ִ� ���� Ƚ���� ���� ��, �ִ� ���� Ƚ���� ������ cnt[i]�� ã�Ƴ��� ������� �����ߴ�. �������̱� ������, �ֺ��� �ϳ��� ��쿡�� �Ʒ� �ݺ����� ���ƾ��ϴ� ������ �ִ�.
�Ʒ��� �ڵ�� �ϳ��� �ݺ����� ����, �ֺ��� �������� ��츦 ����ؼ� ����Ѵ�.

if (cnt[i] > count) //���� Ƚ���� ���� count�� �Ѿ�� ���
		{
			mode = i;
			count = cnt[i];
			mcnt =1;
		}
		else if (cnt[i] == count && mcnt == 1) //count�� ���� ���� Ƚ���� ������ �� ��°�� ���� ��
		{
			mode = i;
			mcnt = 0;
		}
*/