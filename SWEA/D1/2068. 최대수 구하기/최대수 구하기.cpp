#include<stdio.h>
int main()
{
	int a,max=0;
	int arr[10];
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &arr[j]);
		}
		max = arr[0];
		for (int j = 0; j < 10; j++)
		{
			if (max < arr[j])max = arr[j];
		}
		printf("#%d %d\n", i + 1, max);
	}
}