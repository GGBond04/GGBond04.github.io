#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d", &n);
	int a[n], b[n];
	for (i = 0; i < n; i++)scanf("%d", a[i]);
	for (i = 0; i < n; i++)scanf("%d", b[i]);
	for (i = 0; i < n; i++)
	{
		int temp = a[i];
		a[i] = a[b[i]];
		a[b[i]] = temp;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)printf("\n");
		else printf(" ");
	}
}
