//10773, ���� 20240730
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int K, ins = 0, n;
    long long sum = 0;
    cin >> K;

    vector <int> vec(K);


    for (int i = 0; i < K; i++)
    {
        cin >> n;

        //STACK
        if (n != 0)
        {
            vec[ins] = n;
            ins++;
        }
        else
            vec[--ins] = 0;
    }
    for (int i = 0; i < ins; i++) //�ݺ����� ������� ���� instructor ���� �� ���ÿ� ����� �������� �����̴�.
        sum += vec[i];
    cout << sum;
}
/*
���Լ����� ������ ��������, �迭�̳� ���͸� �̿��� ���� ������ ������ �� �ִ�.
C++ �����ϴ� �ڷᱸ�� Ÿ���� ����ϸ� �� ���ϰ�����, C++ �� �ڷᱸ���� ���� ���� ���ΰ� ����� �Ŀ� ����ϴ� ���� ���� ��!
���� ������ C++ Study�� ����� �����̴�.
*/