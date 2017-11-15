#include<stdio.h>
int main()
{
	int n,m,s,t,x;
	x=0;
	int a[10000];
	scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		scanf("%d",&a[k]);
	}
	for(int i=0;i<n;i++)
	{
		t=0;
		s=0;
		m=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t+=1;
			}
			else if(a[i]>a[j])
			{
				m+=1;
			}
			else
			{
				s+=1;
			}
		}
		if(t==m){printf("%d\n",a[i]);break;
		}
		else{x+=1;
		}
	}
	if(x==n){printf("-1");
	} 
}
