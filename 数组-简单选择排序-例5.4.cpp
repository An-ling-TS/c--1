#include<stdio.h>
void SelectionSort(int a[],int n);
int main()
{
	int a[6]={9,8,7,6,5,4};
	int i;
	SelectionSort(a,6);
	printf("≈≈–Ú∫Û£ª");
	for(i=0;i<6;i++)
	{
		printf("%6d",a[i]);
	 } 
	printf("\n"); 
	return 0;
 } 
 void SelectionSort(int a[],int n)
 {
 	int i,j,tem;
 	int index;
 	for(i=0;i<n-1;i++)
 	{
 		index=i;
 		for(j=i+1;j<n;j++)
 		{
 			if(a[j]<a[index])
 				{
 					index=j;
				 }
		 }
		 if(i!=index)
		 {
		 	tem=a[i];a[i]=index;a[index]=tem;
		 }
	 }
 }
