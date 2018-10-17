#include<iostream>
using namespace std;

int main()
{
	int a[5],k;
	cout<<"Enter five elements: ";
	
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	for(int i=1;i<5;i++)
	{
		int min=a[i];
		for(int j=i-1;j>=0;j--)
		{
		
			if(a[j]>a[i])
			{
				a[j+1]=a[j];
				k=j;	
			}
			
			else
			{
				break;
			}
		
		   
		}
		
		a[k]=min;
		
	}
	
	cout<<endl;
	
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
