//�似Ǫ�� ����, 20240717
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int N, K;
	
	cin >> N >> K;
	vector<int> V(N);

	int i, j, cnt;
	int ins=0; //INDEX instructor
	cout << '<';
	
	for (i = 0; i < N; i++) //Vecotr ��Ұ� �ʱ�ȭ
		V[i] = i+1;

	for (i = 0; i < N; i++)
	{
		cnt = 0;

		//V[0] ~ V[N-1]���� �ݺ��ؼ� Ž��
		while (1)
		{
			//�����ڰ� �־��� ������ �Ѿ�� ��� �ʱ�ȭ
			if (ins == N) 
				ins = 0;

			//V[ins]�� ���� �ִ� ��� Count�� �����Ѵ�.
			if (V[ins] != 0) 
				cnt++;
			
			// Count�� K�� ������ ���� V[ins]�� ����ϰ�, �ش� �ε����� ���� 0���� �ʱ�ȭ�Ѵ�.
			if (cnt == K)
			{
				cout << V[ins]; 
				V[ins] = 0;
				break;
			}		
			ins++;
		}
		
		if (i != N - 1)
			cout << ", ";
	}
	cout << '>';
}

/*
if (ins >= N - 1)
		{
			ins = 0;
		}
if (V[ins] != 0)
			{
				cout << V[ins] << ", ";
				V[ins] = 0; //��µ� �� 0���� ����

				ins += K ; //�����ڴ� [2]. [5], [8]...�� ����Ų��. idx�� N-1�� �ʰ��ϸ� ins�� �ʱ�ȭ�ϰ� ���� �з���ŭ ��������.. �ǳ�?
				break;

			}
			else //V[ins] == 0�� ���. �ε��� ����, [2] -> [5] -> [1] -> ([2] -> [5] -> )[6]�̴�. [2]�� [5]���� �ߺ��� �߻�������.. �̶��� ī��Ʈ�� �Ѱܾ� �Ѵ�
			{
				//�ٵ� �̶��� ī��Ʈ�� ó���Ϸ��� ��� �ؾ��ұ�? �ƹ����� cnt�� �Ἥ �ϳ��� �����ϴ°� ��������.. �ٵ� �ð��ʰ� �ɸ�����..
			}
*/