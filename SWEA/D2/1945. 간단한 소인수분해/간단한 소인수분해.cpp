#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	int n,m;
	int a, b, c, d, e;
	a = b = c = d = e = 0;
	
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		while (n % 2 == 0)
		{
			a++;
			n = n / 2;
			
		}
		while (n % 3 == 0)
		{
			b++;
			n = n / 3;
			
		}
		while (n % 5 == 0)
		{
			c++;
			n = n / 5;

		}
		while (n % 7 == 0)
		{
			d++;
			n = n / 7;

		}
		while (n % 11 == 0)
		{
			e++;
			n = n / 11;

		}
		printf("#%d %d %d %d %d %d\n", i, a, b, c, d, e);
		a = b = c = d = e = 0;
	}
}
