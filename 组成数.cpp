//有4个不同数字，组成不同的三位数，输出结果
#include<stdio.h>
int main()
{
	int a[7];
	char error; 
	int t;
	t=0;
	for(int i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<4;j++)
	{
		for(int k=0;k<4;k++)
		{
			for(int m=0;m<4;m++)
			{
				if(a[j]!=a[k] && a[j]!=a[m] && a[m]!=a[k])
				{
					t+=1;
					printf("%d %d\n",a[j]*100+a[k]*10+a[m],t);
				}
			}
			
		}
	}
	if(t==0)
	{
		printf("error\n");
	}
	return 0;
}

