#include<stdio.h>
void traverse(int*a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void insertionsort(int*a,int n)
{
	int element,j;
	for(int i=1;i<=n-1;i++)
	{
	element=a[i];
	j=i-1;
	while (a[j]>element)
		{
		a[j+1]=a[j];
		j--;
		}
		a[j+1]=element;
	}
}
int main()
{
	int a[]={12,2,34,67,45};
	int n=5;
	traverse(a,n);
	insertionsort(a,n);
	traverse(a,n);
	return 0;
}
