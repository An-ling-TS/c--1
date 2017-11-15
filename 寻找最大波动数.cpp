#include<stdio.h>
#include<math.h>
int main()
{
	int n,max;
	int a[10000];
	int b[10000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n-1;j++)
	{
		b[j]=fabs(a[j+1]-a[j]);
	}
	max=b[0];
	for(int k=1;k<n-1;k++)
	{
		if(max<b[k])
		{
			max=b[k];
		}
	}
	printf("%d\n",max);
	return 0;
}
