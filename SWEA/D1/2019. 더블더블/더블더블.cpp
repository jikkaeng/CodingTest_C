#include<stdio.h>
#include<math.h>

int main()
{
	int a;
	scanf("%d", &a);
	printf("1 ");
	for (int i = 1; i <= a; i++)
	{
		printf("%d ", (int)pow(2,i));
	}
}