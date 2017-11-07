#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,m;
	int a[n];
	double x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",m);
		if(m<0)
		{
			printf("EFFOR\n");
		}
		x=sqrt(m);
		printf("%f",x);
	} 
	return 0;
 } 
