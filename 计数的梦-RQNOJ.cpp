#include<stdio.h>
int main()
{
	int n,temp,m,a[10],t;
	scanf("%d%d",&m,&n);
	for(int i=0;i<10;i++)
	{
		a[i]=0;
	}
	for(int i=m;i<=n;i++)
	{
		temp=i;
		for(int k=0;k<10;k++)
		{
			t=temp%10;temp=(temp-t)/10;
			if(t==0)a[0]++;
			else if(t==1)a[1]++;
			else if(t==2)a[2]++;
			else if(t==3)a[3]++;
			else if(t==4)a[4]++;
			else if(t==5)a[5]++;
			else if(t==6)a[6]++;
			else if(t==7)a[7]++;
			else if(t==8)a[8]++;
			else if(t==9)a[9]++;
			if(temp==0)break;
		}
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
} 
