#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	int n,  k;
	char c;
	
	int cnt = 0,sum=0;
	
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		char a[201] = "";
		char b[11] = "";
		int bb[10] = { 0 };
		for (int j = 0; j < n; j++)
		{
			scanf("%s %d", &b[j], &bb[j]);
		}

		
		for (int j = 0; j < n; j++)
		{
			sum += bb[j];
			for (int z = 0; z < bb[j]; z++)
			{
				a[cnt] = b[j];
				cnt++;
			}
			
		}
		int cnt1 = 0;
		cnt = sum / 10;
		printf("#%d\n", i);
		for (int z = 0; z < cnt; z++)
		{
			for (int j = 0; j < 10; j++)
			{
				printf("%c", a[cnt1]);
				cnt1++;
			}printf("\n");
		}
		cnt = sum % 10;
		for (int z = 0; z < cnt; z++)
		{
			printf("%c", a[cnt1]); cnt1++;
		}
		printf("\n");
		sum = 0;
		cnt = 0;
		
	}
}
