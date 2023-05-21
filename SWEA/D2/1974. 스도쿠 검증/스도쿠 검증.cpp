#include <stdio.h>

#include<string.h>

int main()

{
	int t;
	int a[9][9];
	int z, x, c, v, b, n, m, s, d;
	z = x = c = v = b = n = m = s = d  = 0;
	int ck = 0,sum=0;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			for (int k = 0; k < 9; k++)
			{
				scanf("%d", &a[j][k]);
			}
		}
		for (int j = 0; j < 9; j++)
		{
			for (int k = 0; k < 9; k++)
			{
				if (a[j][k] == 1)z++;
				if (a[j][k] == 2)x++;
				if (a[j][k] == 3)c++;
				if (a[j][k] == 4)v++;
				if (a[j][k] == 5)b++;
				if (a[j][k] == 6)n++;
				if (a[j][k] == 7)m++;
				if (a[j][k] == 8)s++;
				if (a[j][k] == 9)d++;
			}
			if (z == 1 && x == 1 && c == 1 && v == 1 && b == 1 && n == 1 && m == 1 && s == 1 && d == 1)ck += 1;
			else break;
			z = x = c = v = b = n = m = s = d = 0;
			//printf("%d ", ck);
			for (int k = 0; k < 9; k++)
			{
				if (a[k][j] == 1)z++;
				if (a[k][j] == 2)x++;
				if (a[k][j] == 3)c++;
				if (a[k][j] == 4)v++;
				if (a[k][j] == 5)b++;
				if (a[k][j] == 6)n++;
				if (a[k][j] == 7)m++;
				if (a[k][j] == 8)s++;
				if (a[k][j] == 9)d++;

			}
			if (z == 1 && x == 1 && c == 1 && v == 1 && b == 1 && n == 1 && m == 1 && s == 1 && d == 1)ck += 1;
			else break;
			z = x = c = v = b = n = m = s = d = 0;
			//printf("%d ", ck);
		}z = x = c = v = b = n = m = s = d = 0;
		//printf("hh");
		for (int j = 0; j < 9; j += 3)
		{
			for (int k = 0; k < 9; k += 3)
			{
				z = x = c = v = b = n = m = s = d = 0;
				for (int p = 1; p < 10; p++)
				{
					if (a[j][k] == p)z++;
					else if (a[j + 1][k] == p)x++;
					else if (a[j + 2][k] == p)c++;
					else if (a[j][k + 1] == p)v++;
					else if (a[j + 1][k + 1] == p)b++;
					else if (a[j + 2][k + 1] == p)n++;
					else if (a[j][k + 2] == p)m++;
					else if (a[j + 1][k + 2] == p)s++;
					else if (a[j + 2][k + 2] == p)d++;

					//printf("%d %d %d %d %d %d %d %d %d \n", z,x,c,v,b,n,m,s,d);
				}
				
				if (z == 1 && x == 1 && c == 1 && v == 1 && b == 1 && n == 1 && m == 1 && s == 1 && d == 1)ck += 1;
				else break;
				
			}
		}
		z = x = c = v = b = n = m = s = d = 0;
		if (ck == 27)printf("#%d 1\n", i);
		else printf("#%d 0\n", i);
		sum = 0; ck = 0;
	}

}