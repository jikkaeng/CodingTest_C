#include <stdio.h>
#include <string.h>
int main()
{
	int t,n,cnt=0;
	scanf("%d", &t);
	char a[11] = "";
	char b[6] = "";
	char c[6] = "";
	char d[6] = "";
	for (int i = 1; i <= t; i++)
	{
		scanf("%s", a);
		
		n = strlen(a);
		
		if (n % 2 == 0)
		{
			for (int j = 0; j < n / 2; j++)
			{
				b[j] = a[j];
				
			}
			for (int j = n/2; j < n; j++)
			{
				c[cnt] = a[j];
				cnt++;
			}cnt = 0;
			for (int j = strlen(c) - 1; j >= 0; j--)
			{
				d[cnt] = c[j];
				cnt++;
			}cnt = 0;
			//printf("%s %s", b, d);
			if (strcmp(b,d) == 0)printf("#%d 1", i);
			else printf("#%d 0", i);
		}
		else
		{
			for (int j = 0; j < n / 2; j++)
			{
				b[j] = a[j];
			
			}
			for (int j = (n / 2)+1; j < n; j++)
			{
				
				c[cnt] = a[j];
				cnt++;
			}cnt = 0;
			for (int j = strlen(c) - 1; j >= 0; j--)
			{
				d[cnt] = c[j];
				cnt++;
			}cnt = 0;
			
			if (strcmp(b,d) == 0)printf("#%d 1", i);
			else printf("#%d 0", i);
			
		}
		for (int j = 0; j < 6; j++)
		{
			b[j] = '\0';
			c[j] = '\0';
			d[j] = '\0';
		}
		printf("\n");
	}
}
