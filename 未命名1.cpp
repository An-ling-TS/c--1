#include<stdio.h>
int main()
{
	int n,k,j,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(a[j]<a[i])break;
		}
		if(j!=(i-1))
		{
			int temp=a[i];
			for(k=i-1;k>j;k--)
			{
				a[k+1]=a[k];
			}
			a[k+1]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=i+1;k<n;k++)
		{
			if(a[i]==a[k])
			{
				for(int r=k;r<n;r++)
				{
					a[r]=a[r+1];
				}
				n--;
			}
		}
	}
	printf("%d\n",n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
