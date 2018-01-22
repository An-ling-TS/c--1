#include<stdio.h>
int main()
{
	char s[100];
	int x,t,a;
	x=0;t=0;
	for(int i=0;i<100;i++)
	{
		scanf("%c",&s[i]);
		if(s[i]=='\n')break;
		x=x+1;
	}
	for(int i=0;i<x;i++)
	{
		if(s[i]>=48 && s[i]<=57)
		{
			a=i;
			shuzi(a);t=t+1;i=a-1;
		}
	}
	printf("%d",t);
	return 0;
 } 
 int shuzi(int a)
{
	if(s[a]>=48 && s[a]<=57)
	{
		a=a+1;
		shuzi(s[a]);
	}
	return a;
}
