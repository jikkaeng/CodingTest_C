#include<stdio.h>
#include <string.h>

int main()
{
	char a[201];
	scanf("%s", a);
	
	for (int i = 0; i < strlen(a); i++)
	{
		printf("%d ", a[i] - 64);
	}
}