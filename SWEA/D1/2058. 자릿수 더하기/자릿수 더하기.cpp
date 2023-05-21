#include<stdio.h>
int main()
{
	int a,sum=0;
	scanf("%d", &a);
	sum += a / 1000;
	a = a % 1000;
	sum += a / 100;
	a = a % 100;
	sum += a / 10;
	sum += a % 10;
	printf("%d", sum);
}