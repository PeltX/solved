//4153, Á÷°¢»ï°¢Çü 20240705
#include<stdio.h>
int main()
{
	int max, a, b, c;

	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;

		max = a; 
		max = (max > b) ? max : b;
		max = (max > c) ? max : c;

		if (max == a)
		{
			if (a * a == b * b + c * c)
				printf("right\n");
			else
				printf("wrong\n");
		}
		else if (max == b)
		{
			if (b * b == a * a + c * c)
				printf("right\n");
			else
				printf("wrong\n");
		}
		else
		{
			if (c * c == b * b + a * a)
				printf("right\n");
			else
				printf("wrong\n");
		}		
	}
}