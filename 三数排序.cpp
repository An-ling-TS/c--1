#include<stdio.h>
int main()
{
	double a,b,c,tem;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a<b)
	{
		tem=a;
		a=b;
		b=tem;
	 } 
	 if(a<c)
	 {
	 	tem=a;
	 	a=c;
	 	c=tem;
	 }
	 if(b<c)
     {
     	tem=b;
	 	b=c;
	 	c=tem;
	 }
	 printf("%lf\n%lf\n%lf\n",a,b,c);
	return 0;	
}
