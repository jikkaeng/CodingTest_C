#include<stdio.h>
int main()
{
	int a,tmp;
	int b[199];
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = i + 1; j < a; j++)
		{
			if(b[i]<b[j])
			{
				tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
		}
	}
	
	printf("%d", b[a / 2]);
}