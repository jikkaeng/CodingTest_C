#include<stdio.h>


int main()
{
	int p,k;
	scanf("%d %d", &p,&k);
	if(k>p)printf("%d", 999-k + p + 2);
	else if (k < p)printf("%d", p - k + 1);
}