#include<stdio.h>
int main()
{
	int a[10];
	int n,t;
	scanf("%d",&n);
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=9;i>n-1;i--)
	{
		t=a[9];
		for(int j=9;j>0;j--)
		{
			a[j]=a[j-1];
		}
		a[0]=t;
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
 } 
