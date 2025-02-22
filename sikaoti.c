#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i;
	int a[200];
	a[1]=0,a[2]=1;
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		a[i]=(i-1)*(a[i-1]+a[i-2]);
	}
	printf("%d",a[n]);
	return 0;
} 
