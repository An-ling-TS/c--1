#include<stdio.h>
int zuhe()
{
	
}
int main()
{
	int n[10],m,s[10][100];
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
		for(int k=0;k<n[i];k++)
		{
			scanf("%d",&s[i][k]);
		}
	}
	for(int i=0;i<m;i++)//ÑéÖ¤ÊäÈë 
	{
		printf("%d\n",n[i]);
		for(int k=0;k<n[i];k++)
		{
			printf("%d ",s[i][k]);
		}printf("\n");
	}
	
	return 0;
 } 
