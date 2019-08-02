#include<stdio.h>
int main()
{
	int n;scanf("%d",&n);
	int arr[n],i;
	for(i=1;i<=n;i++)
	scanf("%d",&arr[i]);
	swap(&arr[1],&arr[2]);
	printf("%d,%d",arr[1],arr[2]);
}
void swap(int *a,int *b)
{
	int temp;
	*temp=*a;
	*a=*b;
	*b=temp;
}
