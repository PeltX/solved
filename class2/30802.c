//30802, À£ÄÄ Å°Æ® 20240705
#include<stdio.h>
int main()
{
	int N, size[6], T, P, i, max=0, div, mod, T_order, T_cnt=0;

	scanf("%d", &N);

	for (i = 0; i < 6; i++)
		scanf("%d", &size[i]);

	scanf("%d %d", &T, &P);

	//Æ¼¼ÅÃ÷
	for (i = 0; i < 6; i++)
	{
		div = size[i] / T;
		mod = size[i] % T;
		T_order = div;
		if (mod > 0)
			T_order++;
		T_cnt += T_order;
	}
	printf("%d\n", T_cnt);
	
	//Ææ
	printf("%d %d", N / P, N % P);
}