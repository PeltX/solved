//28702, FizzBuzz 20240719
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char str[9];
	int len, num, cnt, idx;

	for (int i = 0; i < 3; i++) //3개의 입력 중 최소한 하나의 숫자가 입력됨이 보장된다.
	{
		scanf("%s", str);
		len = strlen(str);
		if ('0' <= str[0] && str[0] <= '9') //입력받은 문자열이 숫자인지 확인
		{
			num = 0, cnt = 0;
			for (int j = len-1; j >= 0; j--)
				num += (str[cnt++]-'0') * pow(10, j);
			idx = i;
		}
	}
	num += 3 - idx;
	
	if (num % 3 == 0 && num % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (num % 3 == 0 && num % 5 != 0)
	{
		printf("Fizz");
	}
	else if (num % 3 != 0 && num % 5 == 0)
	{
		printf("Buzz");
	}
	else //3, 5의 배수가 아닌 경우
	{
		printf("%d", num);
	}
}
//세 개의 문자열을 입력받을 때, 그 중 하나는 반드시 숫자로 구성된 문자열임을 바탕으로 네 번째 숫자를 알아낼 수 있다.