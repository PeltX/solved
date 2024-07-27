//4949, 균형잡힌 세상 20240728
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int len, L, R, l, r, cnt;

	char PS[100];
	char str[102];

	while (1)
	{
		fgets(str, 102, stdin); //fgets 또는 cin.getline을 이용한다.
		if (str[0] == '.')
			break;

		l = 0, L = 0, r = 0, R = 0, cnt = 0;

		len = strlen(str);
		for (int j = 0; j < len; j++) //괄호 개수 탐색.
		{
			if (str[j] == '(')
				l++;
			else if (str[j] == '[')
				L++;
			else if (str[j] == ')')
				r++;
			else if (str[j] == ']')
				R++;
		}

		if (l != r || L != R)
			cout << "no";
		else
		{
			for (int j = 0; j < len; j++)
			{
				//PUSH
				if (str[j] == '(')
					PS[cnt++] = ')';
				else if (str[j] == '[')
					PS[cnt++] = ']';

				//POP
				if (cnt > 0)
				{
					if (str[j] == ')' && PS[cnt - 1] == ')')
						cnt--;
					else if (str[j] == ']' && PS[cnt - 1] == ']')
						cnt--;
				}
			}

			if (cnt == 0)
				cout << "yes";
			else
				cout << "no";
		}
		cout << '\n';
	}
}
/*
괄호의 개수를 조사하는 과정을 통해, 우괄호만 입력되는 경우 발생하는 반례를 제거할 수 있다.
이후엔 스택의 후입선출 개념을 바탕으로 괄호의 입력을 잘 확인하면 되겠다.
getline과 fgets의 차이?
두 함수를 이용하면 공백을 포함해 문자열을 입력받을 수 있으며, 아래와 같은 차이점이 있다.
-getline의 경우 개행 문자(또는 특정 문자)를 기준으로 입력을 구분하며, 개행이 입력에 포함되지 않는다. 또한 코드 실행 속도가 매우 느리다.
-fgets의 경우 개행이 입력에 포함되며, 코드 실행 속도가 매우 빠르다. 

따라서, fgets를 사용하는 경우 NULL 문자와 개행 문자의 칸까지 고려해야한다.
즉 문자열의 길이가 최대 100자인 경우, getline을 사용한다면 101칸, fgets를 사용한다면 102칸이 필요하다.
이때, 크기를 초과하는 입력은 버퍼에 저장되어 다음 입력에 사용된다. 이것이 오답의 포인트.
배열의 크기를 101칸으로 설정한 채로 fgets를 사용해 위 문제를 구현하게 되면, 100자인 문자열이 입력됐을 때 개행이 버퍼에 들어가게 되고, 다음 입력을 처리해버린다.
일반적으로 테스트 케이스에 최대 길이 문자열을 넣어보는 경우가 없다보니 찾아내는 데 시간이 오래 걸렸다.

fgets를 사용할 때는 배열의 크기, 문자열의 길이 등을 잘 생각해보면 좋을 듯하다.
*/