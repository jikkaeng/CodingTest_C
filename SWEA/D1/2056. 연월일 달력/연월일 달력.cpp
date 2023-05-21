#include<stdio.h>
int main()
{
	int test;
	int a, b[3] = { 0 };
	int check = 0;
	scanf("%d", &test);
	for (int i = 0; i < test; i++)
	{
		check = 0;
		scanf("%d", &a);
		b[0] = a / 10000;
		if (b[0] < 10)check = 3;
		else if (b[0] < 100)check = 2;
		else if (b[0] < 1000)check = 1;
		a = a % 10000;

		b[1] = a / 100;
		b[2] = a % 100;
		if (check == 0)
		{
			if (b[1] > 12 || b[1] < 1)printf("#%d -1\n", i + 1);
			else if (b[1] == 2)
			{
				if (1 <= b[2] && b[2] <= 9)printf("#%d %d/0%d/0%d\n", i + 1, b[0], b[1], b[2]);
				else if (10 <= b[2] && b[2] <= 28)printf("#%d %d/0%d/%d\n", i + 1, b[0], b[1], b[2]);
				else printf("#%d -1\n", i + 1);
			}
			else if (b[1] == 4 || b[1] == 6 || b[1] == 9 || b[1] == 11)
			{

				if (1 <= b[2] && b[2] <= 9)
				{
					if (b[1] < 10)printf("#%d %d/0%d/0%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d %d/%d/0%d\n", i + 1, b[0], b[1], b[2]);
				}
				else if (10 <= b[2] && b[2] <= 30)
				{
					if (b[1] < 10)printf("#%d %d/0%d/%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d %d/%d/%d\n", i + 1, b[0], b[1], b[2]);
				}

				else printf("#%d -1\n", i + 1);
			}
			else
			{
				if (1 <= b[2] && b[2] <= 9)
				{
					if (b[1] < 10)printf("#%d %d/0%d/0%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d %d/%d/0%d\n", i + 1, b[0], b[1], b[2]);
				}
				else if (10 <= b[2] && b[2] <= 31)
				{
					if (b[1] < 10)printf("#%d %d/0%d/%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d %d/%d/%d\n", i + 1, b[0], b[1], b[2]);
				}
				else printf("#%d -1\n", i + 1);
			}
		}
		else if (check == 1)
		{
			if (b[1] > 12 || b[1] < 1)printf("#%d -1\n", i + 1);
			else if (b[1] == 2)
			{
				if (1 <= b[2] && b[2] <= 9)printf("#%d 0%d/0%d/0%d\n", i + 1, b[0], b[1], b[2]);
				else if (10 <= b[2] && b[2] <= 28)printf("#%d 0%d/0%d/%d\n", i + 1, b[0], b[1], b[2]);
				else printf("#%d -1\n", i + 1);
			}
			else if (b[1] == 4 || b[1] == 6 || b[1] == 9 || b[1] == 11)
			{

				if (1 <= b[2] && b[2] <= 9)
				{
					if (b[1] < 10)printf("#%d 0%d/0%d/0%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d 0%d/%d/0%d\n", i + 1, b[0], b[1], b[2]);
				}
				else if (10 <= b[2] && b[2] <= 30)
				{
					if (b[1] < 10)printf("#%d 0%d/0%d/%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d 0%d/%d/%d\n", i + 1, b[0], b[1], b[2]);
				}

				else printf("#%d -1\n", i + 1);
			}
			else
			{
				if (1 <= b[2] && b[2] <= 9)
				{
					if (b[1] < 10)printf("#%d 0%d/0%d/0%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d 0%d/%d/0%d\n", i + 1, b[0], b[1], b[2]);
				}
				else if (10 <= b[2] && b[2] <= 31)
				{
					if (b[1] < 10)printf("#%d 0%d/0%d/%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d 0%d/%d/%d\n", i + 1, b[0], b[1], b[2]);
				}
				else printf("#%d -1\n", i + 1);
			}
		}
		else if (check == 2)
		{
			if (b[1] > 12 || b[1] < 1)printf("#%d -1\n", i + 1);
			else if (b[1] == 2)
			{
				if (1 <= b[2] && b[2] <= 9)printf("#%d 00%d/0%d/0%d\n", i + 1, b[0], b[1], b[2]);
				else if (10 <= b[2] && b[2] <= 28)printf("#%d 00%d/0%d/%d\n", i + 1, b[0], b[1], b[2]);
				else printf("#%d -1\n", i + 1);
			}
			else if (b[1] == 4 || b[1] == 6 || b[1] == 9 || b[1] == 11)
			{

				if (1 <= b[2] && b[2] <= 9)
				{
					if (b[1] < 10)printf("#%d 00%d/0%d/0%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d 00%d/%d/0%d\n", i + 1, b[0], b[1], b[2]);
				}
				else if (10 <= b[2] && b[2] <= 30)
				{
					if (b[1] < 10)printf("#%d 00%d/0%d/%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d 00%d/%d/%d\n", i + 1, b[0], b[1], b[2]);
				}

				else printf("#%d -1\n", i + 1);
			}
			else
			{
				if (1 <= b[2] && b[2] <= 9)
				{
					if (b[1] < 10)printf("#%d 00%d/0%d/0%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d 00%d/%d/0%d\n", i + 1, b[0], b[1], b[2]);
				}
				else if (10 <= b[2] && b[2] <= 31)
				{
					if (b[1] < 10)printf("#%d 00%d/0%d/%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d 00%d/%d/%d\n", i + 1, b[0], b[1], b[2]);
				}
				else printf("#%d -1\n", i + 1);
			}
		}
		else if (check == 3)
		{
			if (b[1] > 12 || b[1] < 1)printf("#%d -1\n", i + 1);
			else if (b[1] == 2)
			{
				if (1 <= b[2] && b[2] <= 9)printf("#%d 000%d/0%d/0%d\n", i + 1, b[0], b[1], b[2]);
				else if (10 <= b[2] && b[2] <= 28)printf("#%d 000%d/0%d/%d\n", i + 1, b[0], b[1], b[2]);
				else printf("#%d -1\n", i + 1);
			}
			else if (b[1] == 4 || b[1] == 6 || b[1] == 9 || b[1] == 11)
			{

				if (1 <= b[2] && b[2] <= 9)
				{
					if (b[1] < 10)printf("#%d 000%d/0%d/0%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d 000%d/%d/0%d\n", i + 1, b[0], b[1], b[2]);
				}
				else if (10 <= b[2] && b[2] <= 30)
				{
					if (b[1] < 10)printf("#%d 000%d/0%d/%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d 000%d/%d/%d\n", i + 1, b[0], b[1], b[2]);
				}

				else printf("#%d -1\n", i + 1);
			}
			else
			{
				if (1 <= b[2] && b[2] <= 9)
				{
					if (b[1] < 10)printf("#%d 000%d/0%d/0%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d 000%d/%d/0%d\n", i + 1, b[0], b[1], b[2]);
				}
				else if (10 <= b[2] && b[2] <= 31)
				{
					if (b[1] < 10)printf("#%d 000%d/0%d/%d\n", i + 1, b[0], b[1], b[2]);
					else printf("#%d 000%d/%d/%d\n", i + 1, b[0], b[1], b[2]);
				}
				else printf("#%d -1\n", i + 1);
			}
		}
		
		b[0] = 0;
		b[1] = 0;
		b[2] = 0;
	}

}