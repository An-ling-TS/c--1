#include<stdio.h>
int main()
{
	int i,j,s=0;
	int a[5][3];
	int v[3]={0};
	int *p=&a[0][0];
	int (*pp)[3]=&a[0];
	printf("����ɼ���\n");
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
	 printf("��ѧ��%d\nC���ԣ�%d\n���ݿ�ϵͳ��%d\n",v[0],v[1],v[2]);
	 return 0;
 } 
