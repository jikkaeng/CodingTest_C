#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d %d", &b, &c);
		if (b > c)printf("#%d >\n", i+1);
		else if (b < c)printf("#%d <\n", i+1);
		else printf("#%d =\n", i+1);
	}
}