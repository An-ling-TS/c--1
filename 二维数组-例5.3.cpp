#include<stdio.h>
int main()
{
	int i,j,s=0;
	int a[5][3];
	int v[3]={0};
	int *p=&a[0][0];
	int (*pp)[3]=&a[0];
	printf("输入成绩；\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			v[j]+=a[i][j];
		}
	 } 
	 for(j=0;j<3;j++)
	 {
	 	v[j]=v[j]/5;
	 }
	 printf("数学：%d\nC语言：%d\n数据库系统；%d\n",v[0],v[1],v[2]);
	 return 0;
 } 
