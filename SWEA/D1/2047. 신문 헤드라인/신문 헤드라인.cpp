#include<stdio.h>
#include <string.h>

int main()
{
	char a[81];
	scanf("%s", a);
	
	for (int i = 0; i < strlen(a); i++)
	{
		if ('a' <= a[i] && a[i] < 'z')printf("%c", a[i]-32);
		else printf("%c", a[i]);
	}
}