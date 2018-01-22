#include<stdio.h>
int main()
{
	int a[10][2][20],n,tem,s[10][30],w[10][2],h[10][30],c;
	long long b[10][20];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=2;k++)
		{
			scanf("%d",&b[i][k]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=2;k++)
		{	w[i][k]=0;
			tem=b[i][k];
			for(int r=1;r<=20;r++)
			{
				a[i][k][r]=tem%10;tem=(tem-a[i][k][r]) /10;w[i][k]++;
				if(tem==0)break;
			}printf("\n");
		}
		if(w[i][1]<w[i][2])w[i][1]=w[i][2];
	} 
	for(int i=1;i<=n;i++)
	{	c=0;
		for(int r=1;r<=w[i][1]+1;r++)
		{	s[i][r]=0;
			if(r<=w[i][1])
			{
				s[i][r]=(a[i][1][r]+a[i][2][r]+c)%10;c=(a[i][1][r]+a[i][2][r]+c-s[i][r])/10;
			}
			else
			{
				s[i][r]=c;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{	tem=w[i][1]+1;
		for(int r=1;r<=w[i][1]+1;r++)
		{
			h[i][r]=s[i][tem];tem--;printf("%d",h[i][r]);
		}printf("\n");
	}
	return 0;
} 
