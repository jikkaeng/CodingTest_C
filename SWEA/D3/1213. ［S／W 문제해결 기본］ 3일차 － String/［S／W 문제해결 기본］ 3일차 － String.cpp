#include<stdio.h>
#include<string.h>
int main() {
	int alen,blen;
	int cnt = 0;
	int ck = 0;
	char b[11]="";
	char a[1001] = "";
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &i);
		scanf("%s", b);
		blen = strlen(b);
		scanf("%s", a);
		alen = strlen(a);
		for (int j = 0; j < alen; j++)
		{
			if (a[j] == b[0])
			{
				for (int k = 1; k < blen; k++)
				{
					if (a[j + k] != b[k])ck = 1;
				}
				if (ck == 0)cnt++;
			}
			ck = 0;
		}
		printf("#%d %d\n", i,cnt);
		cnt = 0;
	}
	
	
}