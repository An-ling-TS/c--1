#include<stdio.h>
int main()
{
	int n,m,max,min,t,s;
	int tem; 
	int a[50][50];
	t=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<m;k++)
		{
			scanf("%d",&a[i][k]);
		}
	}
	for(int i=0;i<n;i++)
	{
		max=a[i][0];
		for(int k=1;k<m;k++)
		{
			if(max<a[i][k])
			{
				max=a[i][k];
				tem=k;
			}
		}
		s=0;
		for(int r=0;r<n;r++)
		{
			if(max>a[r][tem])
			{
				goto ab;
			}
			else
			{s=s+1;
			}
		}
		if(s==n)
		{
			t=t+1;
			printf("a[%d][%d]=%d",i,tem,a[i][tem]);
		}
		ab:break;
	}
	if(t==0)
	{
		printf("NO");
	}
	return 0;
 } 
