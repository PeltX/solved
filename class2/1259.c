//1259, �Ӹ���Ҽ� 20240710
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char num[6]; //�ִ� 5�ڸ� + NULL
	int len, i, j, cnt=0;

	while (1)
	{
		scanf("%s", num); //
		len = strlen(num);
		if (num[0] == '0' && len == 1) break;
		cnt = 0;

		for (i = 0; i < len / 2; i++)
		{
			if (num[i] == num[len - 1 - i])
				cnt++;
		}

		if (cnt == len / 2)
			printf("yes\n");
		else
			printf("no\n");
	}
}
/*
���� ���ǿ��� ���ǹ��� 0�� �տ� �� �� ���ٰ� �����Ƿ�, num[0]=='0'�� ���� 0�� �ԷµǾ��� �� ���̰�, if(num[0]=='0') ���Ǹ� ����ϴ��� ������.
�ٸ� ���ǹ��� 0�� �տ� �� �� �ִ� ��츦 �����ϰ�, 0�� �Է¹޾��� ���� �Է��� �����ϴ� ���,
len == 1������ AND�� �����ָ� ���� ���������ϴ�.
*/