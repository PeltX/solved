//7568, ��ġ 20240724
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
������ �� �д� �͵� �߿��ϴ�. ������ �����̳�, ����Ǯ���� ��Ʈ�� �����ϱ� ����.
��������, �� ����� ��ġ ����� �ڽź��� �� ū ��ġ�� ����(������&Ű�� �� ū) ����� �� + 1�� "����"�ϰ� �ִ�.
��, �����͸� ������ ������ �ʿ� ����, ������ ���ǿ��� �� ���߾�� �ǰڴ�.
�� ��������, ������ ���� �� ���� ������ ���� ����� ���� �߿����� �ʴٴ� ���� �������.
*/