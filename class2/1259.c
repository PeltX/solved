//1259, 팰린드롬수 20240710
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char num[6]; //최대 5자리 + NULL
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
문제 조건에서 무의미한 0이 앞에 올 수 없다고 했으므로, num[0]=='0'인 경우는 0이 입력되었을 때 뿐이고, if(num[0]=='0') 조건만 사용하더라도 괜찮다.
다만 무의미한 0이 앞에 올 수 있는 경우를 포함하고, 0을 입력받았을 때만 입력을 종료하는 경우,
len == 1조건을 AND로 묶어주면 쉽게 구현가능하다.
*/