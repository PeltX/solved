//28702, FizzBuzz 20240719
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char str[9];
	int len, num, cnt, idx;

	for (int i = 0; i < 3; i++) //3���� �Է� �� �ּ��� �ϳ��� ���ڰ� �Էµ��� ����ȴ�.
	{
		scanf("%s", str);
		len = strlen(str);
		if ('0' <= str[0] && str[0] <= '9') //�Է¹��� ���ڿ��� �������� Ȯ��
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
	else //3, 5�� ����� �ƴ� ���
	{
		printf("%d", num);
	}
}
//�� ���� ���ڿ��� �Է¹��� ��, �� �� �ϳ��� �ݵ�� ���ڷ� ������ ���ڿ����� �������� �� ��° ���ڸ� �˾Ƴ� �� �ִ�.