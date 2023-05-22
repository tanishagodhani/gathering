#include<stdio.h>

int sum_of_elements(int arr[],int n)
{
	int i=0,sum=0;

	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;


}
main()
{
	int total=0;
	int array[10]={1,2,3,4,5,6};

	total=sum_of_elements(array,6);

	printf("\n the sum of elements:%d",total);

	return 0;
}
