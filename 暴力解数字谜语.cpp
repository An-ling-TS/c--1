#include<stdio.h>
int main()
{
	int t=1,r=0,e,n,c,i,q,v,g;
	int vingt,cinq,trente;
	for(e=0;e<10;e++)
	{
		if(e==t || e==r )
		{
			continue;
		}
		for(n=0;n<10;n++)
		{
			if(n==t || n==e || n==r)
			{
				continue;
			}
			for(c=1;c<10;c++)
			{
				if(c==t || c==r ||c==e || c==n)
				{
					continue;
				}
				for(i=0;i<10;i++)
				{
					if(i==t ||i==r || i==n || i==e || i==c)
					{
						continue;
					}
					for(q=0;q<10;q++)
					{
						if(q==t || q==e || q==r || q==n || q==i || q==c)
						{
							continue;
						}
						for(v=0;v<10;v++)
						{
						if(v==t || v==e || v==n ||v==r || v==i || v==c || v==q)
						{
							continue;
						 } 
						 for(g=0;g<10;g++)
						 {
						 	if(g==t || g==q || g==r || g==e || g==n || g==c || g==i || g==v)
						 	{
						 		continue;
							 }
							 vingt=v*10000+i*1000+n*100+g*10+t;
							 cinq=c*1000+i*100+n*10+q;
							 trente=t*100000+r*10000+e*1000+n*100+t*10+e;
							 if(vingt+cinq+cinq==trente)
							 printf("´ğ°¸ÊÇ:\n");
							 printf("%8d\n",vingt);
							 printf("%8d\n",cinq);
							 printf("+%6d\n",cinq);
							 printf("--------\n");
							 printf("%8d\n",trente);
						 }
					}
				}
			}
		}
	}
	return 0;
} 
} 
