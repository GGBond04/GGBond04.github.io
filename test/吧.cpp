#include<stdio.h>
int main()
{
	long long int n,i,num=1;
	scanf("%lld",&n);
	
	for(i=1;i<=n;i++)
	{
		long long int I=i*i,J=I;
		for(num=1;J>9;num*=10)
		{
			J/=10;
		}
		for(;I>0;)
		{
			if(I==i)
			{
				printf("%lld ",i);
				break;
			}
			I%=num;
			num/=10;
		}
	}
	return 0;
}

