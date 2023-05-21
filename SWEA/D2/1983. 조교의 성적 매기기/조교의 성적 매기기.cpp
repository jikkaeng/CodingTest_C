#include <stdio.h>

#include<string.h>

int main()

{

	int t, n, k, sum = 0;
	int b, c, d;
	float tmp;
	int max = 0;
	int s = 0, z = 1;
	
	float a[100] ;

	float a1[100] ;

	

	scanf("%d", &t);

	for (int i = 1; i <= t; i++)

	{

		scanf("%d %d", &n, &k);

		for (int j = 0; j < n; j++)

		{

			scanf("%d %d %d", &b,&c,&d);

			a[j] = (b*0.35) + (c*0.45) + (d*0.2);

		}

		
		for (int j = 0; j < n; j++)
		{
			a1[j] = a[j];
		}
		

		for (int j = 0; j < n; j++)

		{

			for (int k = j + 1; k < n; k++)

			{

				if (a[j] < a[k])

				{

					tmp = a[j];

					a[j] = a[k];

					a[k] = tmp;

				}

			}

		}

		s = n / 10;
		int ccnt = 1;
		z = 1;
		
		for (int j = 0; j < n; j++)

		{
			
			
				if (a1[k - 1] == a[j])
				{
					if (z == 1)printf("#%d A+", i);
					else if (z == 2)printf("#%d A0", i);
					else if (z == 3)printf("#%d A-", i);
					else if (z == 4)printf("#%d B+", i);
					else if (z == 5)printf("#%d B0", i);
					else if (z == 6)printf("#%d B-", i);
					else if (z == 7)printf("#%d C+", i);
					else if (z == 8)printf("#%d C0", i);
					else if (z == 9)printf("#%d C-", i);
					else if (z == 10)printf("#%d D0", i);
					printf("\n");
				}
				if (s == 1)
				{
					z++;
				}
				else
				{
					if (ccnt == s)
					{
						ccnt = 1;
						z++;
					}
					else ccnt++;
				}

		}
		





	}

	

}