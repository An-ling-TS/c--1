#include<stdio.h>
#include<string.h>
void Sort(char *name[],int n);
int main()
{
	char *name[]={"Tsinghua University","Beijing University","Sicuan University","Zhejiang University"};
	int n=4,i;
	Sort(name,n);
	for(i=0;i<n;i++)
	puts(name[i]);
	return 0;
 } 
 void Sort(char *name[],int n)
 {
 	int i,j,k;
 	char *temp;
 	for(i=0;i<n-1;i++)
 	{
 		k=i;
 		for(j=i+1;j<n;j++)
 			if(strcmp(name[k],name[j])>0)//±È½ÏACSIIÂë 
		 		k=j;
 		if(k!=i)
 		{
 			temp=name[i];
 			name[i]=name[k];
 		m	name[k]=temp;
		 }
	 }
 }
