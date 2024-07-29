//10773, 제로 20240730
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
    for (int i = 0; i < ins; i++) //반복문이 종료됐을 때의 instructor 값이 곧 스택에 저장된 데이터의 개수이다.
        sum += vec[i];
    cout << sum;
}
/*
후입선출의 개념을 바탕으로, 배열이나 벡터를 이용해 쉽게 스택을 구현할 수 있다.
C++ 제공하는 자료구조 타입을 사용하면 더 편하겠지만, C++ 및 자료구조에 대한 기초 공부가 선행된 후에 사용하는 것이 좋을 듯!
관련 내용은 C++ Study에 기록할 예정이다.
*/