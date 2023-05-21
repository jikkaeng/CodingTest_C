#include <stdio.h>
#include<string.h>
int main()
{
	int t,cnt,d=0;
	char a[31];
	char b[11]="", c[11]="";
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%s", a);
		for (int j = 1; j < 11; j++)
		{
			for (int k = 0; k < j; k++)
			{
				b[k] = a[k];
				
			}
			for (int k = j; k < j+j; k++)
			{
				c[d] = a[k];
				d++;
			}
			d = 0;
			if (strcmp(b, c) == 0)
			{
				cnt = j;
				break;
			}
			
			
		}
		
		printf("#%d %d\n",i,cnt);
		cnt = 0;
		
	}
}