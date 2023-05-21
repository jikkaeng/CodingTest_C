#include<stdio.h>
#include<string.h>
int main() {

	int cnt = 0;
	int ck = 0;
	int num;
	
	char a[9][9] = { "" };
	for (int i = 1; i <= 10; i++)
	{
		char b[9] = "";
		char c[9] = "";
		scanf("%d", &num);
		for (int j = 0; j < 8; j++)
		{

			scanf("%s", &a[j]);

		}
		int n = 8 - num + 1;
		cnt = 0;
		int num2 = num;
		int x, y;
		int tmp;
		for (int j = 0; j < 8; j++)
		{
			for (int k = 0; k < 8 - num + 1; k++)
			{

				y = k;
				x = 0;
				num2 = num;

				while (num2)
				{
					b[x] = a[j][y];
					c[x] = b[x];
					y++;
					x++;
					num2--;
				}
				for (int z = 0; z < num / 2; z++)
				{
					tmp = c[z];
					c[z] = c[num - z - 1];
					c[num - z - 1] = tmp;

				}
				
				if (strcmp(b, c) == 0)cnt++;
				//printf("x: %s %s %d ", b, c,cnt);
				y = k;
				x = 0;
				num2 = num;
				while (num2)
				{
					b[x] = a[y][j];
					c[x] = b[x];
					y++;
					x++;
					num2--;
				}
				for (int z = 0; z < num / 2; z++)
				{
					tmp = c[z];
					c[z] = c[num - z - 1];
					c[num - z - 1] = tmp;
				}
				if (strcmp(b, c) == 0)cnt++;
				//printf("y: %s %s %d\n", b, c, cnt);


			}

			

		}
		printf("#%d %d\n", i, cnt);

	}
}