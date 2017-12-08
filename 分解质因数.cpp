#include<stdio.h>
int main()
{
	int k,a[10];
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<k;i++)
	{
		for(int r=2;r<=a[i];r++)
		{
			while(a[i]!=r)
			{
				if((a[i]%r)==0)
				{
					printf("%d*",r);
					a[i]=a[i]/r;
				}
				else if((a[i]%r!=0))
				{
					break;
				}
			}
			if(a[i]==r)
			{
				printf("%d",a[i]);
			}
		}
		printf("\n");
	}
	return 0;
} 
