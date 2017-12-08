
#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(m>=1 && m<=5 && n<=5 && n>=1)
	{
		for(int k=0;k<m;k++)
		{
			
			for(int j=0;j<n;j++)
			{
				printf("__**_**__");
			}printf("\n");
			for(int j=0;j<n;j++)
			{
				printf("_*__*__*_");
			}printf("\n");
			for(int j=0;j<n;j++)
			{
				printf("_*_____*_");
			}printf("\n");
			for(int j=0;j<n;j++)
			{
				printf("__*___*__");
			}printf("\n");
			for(int j=0;j<n;j++)
			{
				printf("___*_*___");
			}printf("\n");
			for(int j=0;j<n;j++)
			{
				printf("____*____");
			}printf("\n");
		} 
	}
	else
	{
		printf("Input Error");
	}
	return 0;
}

