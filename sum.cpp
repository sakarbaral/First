#include<iostream>
using namespace std;

int main()
{
	int a[100],i,sum[10],n,small;
	cout<<"Enter number of elements to be added in the array";
	cin>>n;
	cout<<"Enter the elements in the array ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
		
	}
	for(i=0;i<n;i++)
	{
		
		sum[i]=a[i]+a[i+1];
		
	}
	small=sum[0];
		for(i=0;i<n;i++)
	{
		if(sum[i]<small)
		small=sum[i];
		
	}
	cout<<"The smallest sum of two consecutive integers is "<<small;
}
