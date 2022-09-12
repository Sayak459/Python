#include<stdio.h>
void traverse(int*a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void selectionsort(int *a,int n)
{
	int minindex,temp;
	for(int i=0;i<n-1;i++)
	{
		minindex=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[minindex])
			{
				minindex=j;
			}
		}
		temp=a[i];
		a[i]=a[minindex];
		a[minindex]=temp;
	}
}
int main()
{
	int a[]={12,2,34,67,45};
	int n=5;
	traverse(a,n);
	selectionsort(a,n);
	traverse(a,n);
	return 0;
}
